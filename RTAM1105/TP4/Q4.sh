#!/bin/bash

# BigCat

RED='\033[1;31m'
GREEN='\033[1;32m'
WHITE='\033[0m'

for file in "$@"

do

	if [[ -r $file ]]; then
		printf "${GREEN} $file ${WHITE}"
		echo
		cat $file
	else
		printf "$file ${RED}INACCESSIBLE${WHITE}"
	fi
done
