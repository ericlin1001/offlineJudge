#!/bin/bash
cur=`pwd`
run=$cur/run/
for i in $(ls ./hws/); do
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

