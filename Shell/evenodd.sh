#!/bin/bash
echo -n  "Enter a number : "
read a
if [ $(exp $a % 2) -eq 0 ]
then
	echo "even"
else
	echo "odd"
fi
