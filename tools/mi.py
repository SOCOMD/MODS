import os
import subprocess

path_parent = os.path.dirname(os.getcwd())
missions_path = os.path.join(path_parent, "addons\\missions\\fobs")
tools_path = os.path.join(path_parent, "addons\\missions\\tools\\link-includes")
for subdir, dirs, files in os.walk(missions_path):
    for file in files:
        if not file.endswith(".sqm") :
            os.remove(os.path.join(subdir,file))
    if subdir.endswith("images"):
        os.rmdir(subdir)
if os.path.exists(tools_path):
    rc = subprocess.run(['C:\\Program Files\\Git\\git-bash.exe', '-l', tools_path],  shell=True)
