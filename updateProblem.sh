#!/bin/bash
pro=$1
cur=`pwd`
if [  "$pro" = "" ];then
	echo "Problem Name(hit enter to use problem3)?";
	read pro
	if [  "$pro" = "" ];then
		pro=problem3
	fi
fi

if [ ! -d ./problems/$pro ];then
	echo "Problems DO NOT exist";
	exit 1
fi

cd ./problems/$pro
if [ ! -f ./solution.cpp ];then
	echo "Can't find file:solution.cpp"
fi
g++ -o ./solution ./solution.cpp
cd test
for i in $(ls .); do
	cd $i
	echo "Generating "`pwd`
	###inside the test case
	rm -rf targetDir
	cp -r curDir targetDir
	cd targetDir
	cp ../../../solution ./
	cat ../stdin|./solution >../stdout 2>../stderr
	rm -f ./solution
	cd ../../
done
cd ..
rm ./solution



cd $cur
