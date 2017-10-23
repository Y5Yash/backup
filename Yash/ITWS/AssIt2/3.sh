#!/bin/bash

flag=0
for i in `ls *.txt`
do
	j=$(cat $i | grep "$1"|wc -l )
	if [ $j -gt 0 ] 
	then
		echo " $j lines in $i "
		flag=0
	fi
done
if [  $flag -eq 0 ]
then
	exit 1
else 
		exit 0


fi
