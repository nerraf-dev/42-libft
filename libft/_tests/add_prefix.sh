#!/bin/bash

# Loop through each file in the current directory
for file in ft_*.c; do
    # Add the prefix "test_" to the filename
    mv "$file" "test_$file"
done