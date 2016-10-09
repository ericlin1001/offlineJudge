#!/bin/bash
cur=`pwd`
run=$cur/run/
for i in $(ls ./hws/); do
	#echo $i
	cd $cur/hws/$i
	#**********begin****
	cp  main.cpp $run/
	cd $run
	./dotest.sh
	res=$?
	if [ $res -eq 0 ];then
		echo $i:Ok
	else
		echo $i:Fails:$res
		if [ $res -eq 1 ]; then
			cat $run/error.log
		fi
	fi
	#**********end*******
	cd $cur
done

