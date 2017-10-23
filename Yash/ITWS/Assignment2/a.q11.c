#!/bin/bash
i=1
while [ $i -le 10 ]
do
square=$(( i*i ))
	echo $square
(( i++ ))	
done
echo 

for(( i=1;i<11;i++ ))
do
 n=1
for(( j=1;j<i+1;j++ ))
 do
 n=$(( n*i ))
done
echo $n
done
echo
n=101
i=0
j=1

for(( count=2;count<n;count++ ))
do
k=$(( i+j ))
i=$j
j=$k
if [ $(( k%2 )) -eq 1 ]
then
echo $k
fi
done
