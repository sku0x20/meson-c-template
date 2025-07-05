#!/usr/bin/env python3

from os import walk
import sys

if len(sys.argv) != 2:
    rootDir = '.'
else:
    rootDir = sys.argv[1]

srcFiles = []
for (dirpath, dirnames, filenames) in walk(f'{rootDir}/src'):
    for filename in filenames:
        if filename.endswith('.c'):
            dirpath = dirpath.replace(f"{rootDir}/", "")
            srcFiles.append(f"{dirpath}/{filename}")

with open(f'{rootDir}/files.txt', 'w') as f:
    for file in srcFiles:
        f.write(f"{file}\n")
