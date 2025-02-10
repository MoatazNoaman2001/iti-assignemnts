#!/bin/bash

mkdir back_up_new

find ~/ -maxdepth 1 -type f | while read -r file; do cp "$file" back_up_new/; done

