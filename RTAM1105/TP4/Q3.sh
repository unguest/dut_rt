#!/bin/bash

if [[ -r $@ ]];  then
	echo "$@ is readable !"
else
	echo "$@ doesn't exist or isn't readable !"
fi
