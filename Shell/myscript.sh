#$!/bin/bash
echo -n "Enter the value of a : "
read a
echo "Enter the value of b"
read b
echo -n "$a"
echo " value of a = $a"
echo "$b"
echo "value of b = $b"
c=$((a+b))
echo "sum of a and b (c) = $c"
d=$a+$b
echo "d=$d"
c=$(expr $a + $b)
#for comments exp used for expression
echo "c=$c"
di='expr $a - $b'
echo "dif=$di"
#let
let "c=a+b"
echo "value of c=$c"
c=$((a*b))
echo "mull=$c"
c=$(expr $a \* $b)
# * has some other meanings too
echo "multiply=$c"
c=$(expr $a / $b)
echo "divide=$c"

