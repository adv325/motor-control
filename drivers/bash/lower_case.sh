#!/bin/bash

for dir in */; do
    [ -d "$dir" ] || continue
    newname=$(echo "$dir" | tr '[:upper:]' '[:lower:]')
    if [ "$dir" != "$newname" ]; then
        mv "$dir" "$newname"
    fi
done
