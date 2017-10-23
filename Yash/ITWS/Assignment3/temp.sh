read cmd
x=`man $cmd | wc -w > /dev/null`
echo $x
if [ $x -ne 0 ]
then 
	echo yes
fi	
