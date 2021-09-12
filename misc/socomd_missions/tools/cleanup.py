# cleans any uneeded files from the fobs folder, leaving on the sqm file

import os

path_parent = os.path.dirname(os.getcwd())



for subdir, dirs, files in os.walk(path_parent + "\\fobs"):
    for file in subdir:
        if not file.endswith(".sqm"): 
            print("removing: " + os.path.join(subdir, file))
            os.remove( os.path.join(subdir, file))
