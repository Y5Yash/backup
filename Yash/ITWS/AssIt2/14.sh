#!/bin/bash
for (( i=1 ;i<$#+1;i++ ))
do 
	arr[$i]=$(echo $@| cut  -d " " -f $i)
	  
done

for (( i=1;i<$#+1;i++ ))
do
	for (( j=$i+1;j<$#+1;j++ ))
do  
	if [[ $(printf "${arr[$j]}") -lt $(printf "${arr[$i]}") ]]
	then
	temp=$( printf "${arr[$i]}" )
	arr[$i]=$( printf "${arr[$j]}" )  
	arr[$j]=$temp
fi
done 
done

for (( i=1;i<$#+1;i++ ))
do 
	printf "${arr[$i]} "
done
printf "\n"


