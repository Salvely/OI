#!/bin/sh
lst=`seq 1 7`
for num in $lst
do
	touch ${num}.cpp
done
