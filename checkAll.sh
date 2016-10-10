#!/bin/bash

pro=$1
if [  "$pro" = "" ];then
	echo "Problem Name(hit enter to use problem1)?";
	read pro
	if [  "$pro" = "" ];then
		pro=problem1
	fi
fi

if [ ! -d ./hws/$pro ];then
	echo "User files(./hws/$pro) DO NOT exist";
	exit 1
fi

if [ ! -d ~/shared/anonymous/upload/$pro ];then
	echo "Upload files(~/shared/anonymous/upload/$pro) DO NOT exist";
	exit 1
fi

cp -r ~/shared/anonymous/upload/$pro ./hws/
./Run.sh $pro
if [ ! -f ./hws/$pro/result.txt ];then
	echo "Can not find ./hws/$pro/result.txt";
fi
cp ./hws/$pro/result.txt ~/shared/anonymous/upload/$pro/
unix2dos ~/shared/anonymous/upload/$pro/result.txt
