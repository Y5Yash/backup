#!/bin/bash
for i in 1 3 4
do 
	if [ -d "$i" ]
	then 
		echo "$i"
		echo "${#i}"
	fi 
done
