#!/bin/bash
#ls -d */ | tr -s " " | tr " " "\n" |tr "/" ""
for var in ls
do
	if [ -d $var ]
	then
		echo $var
	fi
done
