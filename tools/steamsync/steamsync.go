package main

import (
    "flag"
    "fmt"
    "io/ioutil"
    "os"
    "os/exec"
    "path/filepath"
    "runtime"

    "gopkg.in/yaml.v2"
)

//Config - List of modsets
type Config struct {
    Content map[string]string `yaml:"workshop"`
}

var steamCMD string
var steamUser string
var steamPass string
var steamGuard string
var configDir string
var outputCache string
var steamScript string
var outputMods string

var arma3productid = `107410`

func main() {
    flag.StringVar(&steamCMD, "x", "", "Steam CMD executable")
    flag.StringVar(&steamUser, "u", "", "Steam user")
    flag.StringVar(&steamPass, "p", "", "Steam password")
    flag.StringVar(&steamGuard, "g", "", "Steam guard code")
    flag.StringVar(&configDir, "c", "workshop.config.yaml", "Workshop content config")
    flag.StringVar(&outputCache, "cache", "./", "Steamapps cache")
    flag.StringVar(&steamScript, "script", "./steamCMDScript", "Steamapps cache")
    flag.StringVar(&outputMods, "mods", "./mods", "Mod Symlink output directory")
    flag.Parse()

    outputCache, _ = filepath.Abs(outputCache)
    outputMods, _ = filepath.Abs(outputMods)
    steamScript, _ = filepath.Abs(steamScript)

    yamlFile, err := ioutil.ReadFile(configDir)
    if err != nil {
        fmt.Println(err.Error())
        return
    }

    var workshopConfig Config
    err = yaml.Unmarshal(yamlFile, &workshopConfig)
    if err != nil {
        fmt.Println(err.Error())
        return
    }

    err = DownloadContent(workshopConfig)
    if err != nil {
        fmt.Println(err.Error())
        return
    }

    for name, id := range workshopConfig.Content {
        err = SymlinkContent(name, id)
        if err != nil {
            fmt.Printf(err.Error())
            return
        }
    }
}

//DownloadContent - Download workshop item to output file
func DownloadContent(workshopConfig Config) error {
    steamCMDScript := "@ShutdownOnFailedCommand 1\n@NoPromptForPassword 1\n"
    steamCMDScript += fmt.Sprintf("login %s %s\n", steamUser, steamPass)
    steamCMDScript += fmt.Sprintf("force_install_dir %s\n", outputCache)

    for _, id := range workshopConfig.Content {
        steamCMDScript += fmt.Sprintf("workshop_download_item %s %s validate\n", arma3productid, id)
    }

    steamCMDScript = fmt.Sprintf("%s\nquit", steamCMDScript)

    err := ioutil.WriteFile(steamScript, []byte(steamCMDScript), 0644)
    if err != nil {
        return err
    }

    cmdName := steamCMD
    cmdArgs := []string{"+runscript", steamScript}

    fmt.Printf("%s %s\n", cmdName, cmdArgs)

    cmd := exec.Command(cmdName, cmdArgs...)
    cmd.Stdout = os.Stdout
    cmd.Stderr = os.Stderr
    err = cmd.Run()

    if err != nil {
        return err
    }

    return nil
}

//SymlinkContent - Copy to output
func SymlinkContent(name string, id string) error {
    source := OSPath(fmt.Sprintf("%s/steamapps/workshop/content/%s/%s", outputCache, arma3productid, id))
    dest := OSPath(fmt.Sprintf("%s/@%s", outputMods, name))

    var cmdArgs []string
    var cmdName string
    if runtime.GOOS == "windows" {
        cmdName = "cmd"
        cmdArgs = []string{"/c", "mklink", "/d", dest, source}
    } else {
        cmdName = "ln"
        cmdArgs = []string{"-sfT", source, dest}
    }

    err := os.MkdirAll(filepath.Dir(dest), os.ModePerm)
    if err != nil {
        return err
    }

    cmd := exec.Command(cmdName, cmdArgs...)
    cmd.Stdout = os.Stdout
    cmd.Stderr = os.Stderr
    err = cmd.Run()
    return err
}

//OSPath - Fix path slashes
func OSPath(path string) string {
    if runtime.GOOS == "windows" {
        return filepath.FromSlash(path)
    } else {
        return filepath.ToSlash(path)
    }
}
