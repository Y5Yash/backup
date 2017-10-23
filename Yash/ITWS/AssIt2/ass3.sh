#!/bin/bash
read name
read date
if [ `date +%Y-%m-%d|cut -c 6-7` ]=[ `$date|cut -c 6-7` ] 

then 
echo "yay"
fi
