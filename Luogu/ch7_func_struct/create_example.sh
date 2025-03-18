#!/bin/sh
lst=`seq 1 11`
for num in $lst
do
	touch ${num}.cpp
done
