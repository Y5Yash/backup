#!/bin/bash
input_strineg=hello
while [ "$input_string" != "bye" ]
do 
	echo " please ttro something"
	read input_string
	echo "you typed : $input_string"
done


