#!/bin/bash

prefix="drv_"
find . -type f ! \( -name "*.sh" -o -name "*.txt" \)| while read -r file; do
    dir=$(dirname $file)
    base=$(basename $file)
    newname=$( echo $base | tr '[:upper:]' '[:lower:]')
    if [ "$base" != "$newname" ]; then
        mv "$file" "$dir/$newname"
    fi
done
