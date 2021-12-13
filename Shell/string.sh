#!/bin/bash
echo "Enter a string"
read a
echo "Enter a string"
read b
if [ -z $a ]
then
	echo "1st string is empty"
fi
if [ -z $b ]
then
	echo "2nd string is empth"
else
	if [ $a == $b ]
	then
		echo "both strings are equal"
	else
		echo "both strings are NOT equal"
	fi
fi


