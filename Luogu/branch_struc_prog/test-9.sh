#!/bin/sh
lst=`seq 1 12`
g++ 9.cpp
for month in $lst
do
	echo "month: "${month}
	echo 2024 $month| ./a.out
	echo "\n"
done
