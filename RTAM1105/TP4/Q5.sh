#!/bin/bash

if [[ $# -lt 1 ]]; then
	echo "Usage : $0 <path_to_scan>"
	exit 0
fi

for file in find $(find $1 -type f)
do

	if [[ -f $file ]]; then

		echo "$file is a$(file $file|cut -d ':' -f 2|cut -d ',' -f 1) file."

	else
		echo "$file is a directory."

	fi

done

exit 0
