#!/usr/bin/env python3

from os import walk

srcFiles = []
for (dirpath, dirnames, filenames) in walk('./src'):
    for filename in filenames:
        if filename.endswith('.c'): 
            srcFiles.append(f"{dirpath}/{filename}")

with open('files.txt', 'w') as f:
    for file in srcFiles:
        f.write(f"{file}\n")