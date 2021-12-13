#!/bin/bash
echo "Enter a string"
read VAR1
echo "Enter a string"
read VAR2
if [ $VAR1 \> $VAR2 ]
then
	echo "String1 is greater than String2"
elif [ "$VAR1" \< "$VAR2" ]
then
	echo "String1 is smaller than String2"
else
	echo "String are the same"
fi

