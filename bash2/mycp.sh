#!/bin/bash

source1="/Docuement/bash2/1.sh"
source2="/Docuement/bash2/2_1.sh"
dest_file="/Docuement/bash2/1_copied.sh"
dest_dir="/Docuement/bash3/"

# Copy a single file to another
cp "$source1" "$dest_file"

echo "Copied $source1 to $dest_file"

cp "$source1" "$source2" "$dest_dir"

echo "Copied $source1 and $source2 to $dest_dir"

echo "Copy operation completed successfully."
