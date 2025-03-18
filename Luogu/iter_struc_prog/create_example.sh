#!/bin/sh
lst=`seq 1 14`
for num in $lst
do
	touch ${num}.cpp
done
