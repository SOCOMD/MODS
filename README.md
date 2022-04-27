<p align="center">
    <img src="https://github.com/SOCOMD/SOCOMD-MODS-2021/blob/master/logo_socomd_ca.png?raw=true" width="480">
</p>

# SOCOMD Addons

This is SOCOMD's (www.socomd.com) git Repository for our modifications. All original code from other Authors remains as their intended license. All other contributions are GPL3.

### Development Environment

See the [ACE3 documentation](https://ace3mod.com/wiki/development/setting-up-the-development-environment.html) on setting up your development environment.

### Tooling

Once that is all done, run the `setup.py` tool found in the tools directory of your project. This will create the necessary links between your Arma installation, your P Drive and your project source directory.

The tool `file_prep.py` updates all function files to include an import of script component, renames them to ensure that the `fnc_` prefix is used, and adds them the `XEH_Prep`.

You can use `build.py` to pack your PBOs for use during development and use `make.py` to create binarized PBOs for release.

#### Releasing a binarized build

You can use make to manage versioning and packing up your release version.

Fresh build and package it up for a release:
```bash
tools/make force checkexternal release 2.1.1
```

Build just a binarized version:
```bash
tools/make
```

### Versioning

You can also manage versioning through the make tool. To do this, navigate to the `addons/main` directory. In there, is a file called `script_mod.hpp`. This contains the following:

```sqf
#define MAJOR 1
#define MINOR 0
#define PATCHLVL 0
#define BUILD 0
```

Modify the numbers in here to represent your build version. The example listed above would be: `2.1.1.0`. This version will be set in each pbo during binarizing. It will also be used in the signature file names, along the commit hash. This will make it easier to identify the exact version that is being used.


### Using CI

This template comes with some basic scripts to validate and enforce parts of the ACE3 coding guidelines. You can find those scripts in the tools directory.

- sqf_validator.py - checks all .sqf files in the addons directory and checks for missing brackets, missing semi-colons and tab usage.
- config_style_checker.py - checks all .hpp and .cpp files in the addons directory and checks for missing brackets and tabs.

For more information on the guidelines, see ACE3 coding guidelines.

You can use these scripts in combination with CI - if you are on GitHub and use Travis-CI, here is an example:

```yml
language: python
python:
- '3.4'
script:
- python3 tools/sqf_validator.py
- python3 tools/config_style_checker.py
```

### Adding new components

Adding a new component to your project is done by copying the example component directory and renaming it. Follow these steps:

- Copy the blank example component directory into the addons directory
- Rename the component directory name (blank -> {your component name})
- Do a search and replace of `blank` by `your component name`. Take care to preserve case sensitivity.
- Do a search and replace of `Blank` by `your component name`  in beautified form, like `Ace` with upper and lower casing. Take care to preserve case sensitivity at search.
- Ensure that the required AddOns in the `config.cpp` file inside your new component are set correctly. You will need at least a requirement to the main component of your project. Any other modifications that your component depends on will also need to be listed here, including your own components that you depend upon.
- Start work on your component.
