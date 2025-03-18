#!/bin/sh
lst=`seq 1 10`
for num in $lst
do
	touch ${num}.cpp
done
