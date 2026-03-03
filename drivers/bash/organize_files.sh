#!/bin/bash

for dir in */; do

    dir=${dir%/}

    echo "Processing $dir..."

    mkdir -p "$dir/src" "$dir/include"

    if ls "$dir"/*.c 1> /dev/null 2>&1; then
        mv "$dir"/*.c "$dir/src/"
        echo "  Moved .c files to src/"
    else
        echo "  No .c files found"
    fi

    if ls "$dir"/*.h 1> /dev/null 2>&1; then
        mv "$dir"/*.h "$dir/include/"
        echo "  Moved .h files to include/"
    else
        echo "  No .h files found"
    fi

done

echo "Done!"


