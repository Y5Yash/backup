#!/bin/bash
read a 
read b
if [ $a -eq 5 -a $b -eq 20 ]
then 
	echo " sum is : ` expr $a + $b` "
else
	echo "sum is invalid"
fi
