#!/bin/bash
cur=`pwd`
run=$cur/run/
pro="problem1"
for i in $(ls ./hws/$pro/); do
	#echo $i
	cd $cur/hws/$i
	#**********begin****
	cp  main.cpp $run/
	cd $run
	./test.sh
	res=$?
	if [ $res -eq 0 ];then
		echo $i:Ok:$res
	else
		echo $i:Fails:$res
	fi
	#**********end*******
	cd $cur
done

