#!/bin/bash

# EQUIVALENT TO Q2.SH // BASED ON Q1

max=$1

for arg in "$@"
do
    if [ "$arg" -gt "$max" ] 
    then
        max=$arg 
    fi
done
echo $max
