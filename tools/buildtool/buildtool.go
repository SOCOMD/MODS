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

//Modset - Contains mod name and pbo paths
type Modset struct {
    Name string   `yaml:name`
    Mods []string `yaml:mods`
}

//Config - List of modsets
type Config struct {
    Modsets []Modset `yaml:modsets`
}

var workingDir string
var outputDir string
var configDir string
var execMakePbo string

func main() {
    flag.StringVar(&workingDir, "d", "./", "Working directory")
    flag.StringVar(&outputDir, "o", "./out", "Output directory")
    flag.StringVar(&configDir, "c", "", "Configuration yaml file")
    flag.StringVar(&execMakePbo, "x", "", "MakePBO executable file")
    flag.Parse()

    yamlFile, err := ioutil.ReadFile(configDir)
    if err != nil {
        fmt.Println(err.Error())
        return
    }

    var buildConfig Config
    err = yaml.Unmarshal(yamlFile, &buildConfig)
    if err != nil {
        fmt.Println(err.Error())
        return
    }

    for _, modset := range buildConfig.Modsets {
        err = modset.Build()
        if err != nil {
            fmt.Println(err.Error())
        }
    }
}

//Build - Creates output directory and builds each pbo in the modset
func (modset *Modset) Build() error {
    workingPath, _ := filepath.Abs(workingDir)
    outputPath, _ := filepath.Abs(outputDir)
    outputPath = filepath.Join(outputPath, modset.Name, "addons/")

    err := os.MkdirAll(outputPath, os.ModePerm)
    if err != nil {
        return err
    }

    for _, mod := range modset.Mods {
        modBuildPath := filepath.Join(workingPath, mod)
        err = MakePBO(modBuildPath, outputPath)
    }
    return err
}

//MakePBO - Runs Mikero MakePbo
func MakePBO(buildPath string, outputPath string) error {
    var cmdArgs []string
    var cmdName string
    if runtime.GOOS == "windows" {
        cmdName = execMakePbo
        cmdArgs = []string{"-N", "-P", "-U", buildPath, outputPath}
    } else {
        cmdName = execMakePbo
        cmdArgs = []string{"-N", "-P", "-U", buildPath, outputPath}
    }

    cmd := exec.Command(cmdName, cmdArgs...)
    cmd.Stdout = os.Stdout
    cmd.Stderr = os.Stderr
    err := cmd.Run()
    return err
}
