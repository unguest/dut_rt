#!/bin/bash

max=$1

for arg in "$@"
do
    if [ "$arg" -gt "$max" ] 
    then
        max=$arg 
    fi
done
echo $max
