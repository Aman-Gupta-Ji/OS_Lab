#!/bin/bash
echo "Enter two numbers"
read var1
read var2
if [ $var1 -gt $var2 ]
then
	echo "$var1 is greater than $var2"
elif [ $var1 -lt $var2 ]
then
	echo "$var1 is less than $var2"
elif [ $var1 -eq $var2 ]
then
	echo "$var2 is equal to $var1"
fi

