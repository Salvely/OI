#!/bin/sh
lst=`seq 1 8`
for num in $lst
do
	touch ${num}.cpp
done
