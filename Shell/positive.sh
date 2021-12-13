#!/bin/bash
echo -n "Enter a number : "
read a
if [ $a == 0 ]
# == can also work but it is generally used for strings
then
	echo "zero 0"
elif [ $a -gt 0 ]
then
	echo "positive"
else
	echo "negative"
fi

