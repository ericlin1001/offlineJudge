#!/bin/bash

pro=$1
if [  "$pro" = "" ];then
	echo "Problem Name(hit enter to use problem1)?";
	read pro
	if [  "$pro" = "" ];then
		pro=problem1
	fi
fi

rm  -r ~/shared/anonymous/upload/problem1/*新*
rm  -r ~/shared/anonymous/upload/problem1/*cpp
rm  -r ~/shared/anonymous/upload/problem2/*新*
rm  -r ~/shared/anonymous/upload/problem2/*cpp
rm  -r ~/shared/anonymous/upload/problem3/*新*
rm  -r ~/shared/anonymous/upload/problem3/*cpp
