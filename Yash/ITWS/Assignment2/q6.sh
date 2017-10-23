#!/bin/bash
read msal
av=$(( $msal*12 ))
if test $av -le 300000 
then	echo "NO TAX PAYMENT REQUIRED"
else
	(( tax=av*3 ))
	echo  "TAX PAYMENT REQUIRED:" $(echo "$tax/10" | bc -l)	

fi

