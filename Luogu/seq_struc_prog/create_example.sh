#!/bin/sh
lst=`seq 1 12`
for num in $lst
do
	touch ${num}.cpp
done
