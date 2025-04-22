import os
import sys
import subprocess

tsscript = sys.argv[0]


# We need to get the first argument and assign it to the variable 'sourcein'
sourcein = sys.argv[1]
# We need to get the second argument and assign it to the variable 'binout'
binout = sys.argv[2]


# checks if all args are actually there and not empty
if len(sys.argv) != 3:
    print("Please provide the source file and the output binary file as arguments.")
    print("Usage: python {tsscript} <source_file.c> <output_binary>")
    sys.exit(1)

def check_libs_exist():
    os.path.exists('/usr/bin/cc')
    os.path.exists('/usr/include/grippycore.h')


if os.path.exists(sourcein):
    if sourcein.endswith('.c'):
        os.system(f"cc {sourcein} -o {binout} ")
    else:
        print("Source file passed does not end with .c, it must end with .c");
        sys.exit(1)
else:   
    print("Source file passed does not exist, please check the path and try again");
    sys.exit(1)
# Check if the binary file was created successfully
if os.path.exists(binout):
    print(f"Binary file {binout} created successfully.")
else:   
    print(f"Failed to create binary file {binout}.")
    sys.exit(1)
# Check if the binary file is executable
if os.access(binout, os.X_OK):
    print(f"Binary file {binout} is executable.")
else:
    print(f"Binary file {binout} is not executable.")
    sys.exit(1)