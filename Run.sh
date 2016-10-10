#!/bin/bash
####
Err_Ok=0
Err_Compile=1
Err_Runtime=2
Err_Stdout=3
Err_Dir=5
printErr(){
	type=$1
	case $type in 
		$Err_Ok)echo -n  "Accepted";;
		$Err_Compile)echo -n  "Compile Error";;
		$Err_Runtime)echo -n  "Runtime Error";;
		$Err_Stdout)echo -n  "Wrong Answer";;
		#$Err_Stderr)echo -n  "Wrong Stderr";;
		$Err_Dir)echo -n  "Output files Error";;
		10)echo -n  "Can't find main.cpp";;
	esac
}
####
cur=`pwd`
run=$cur/run
res=0

pro=$1
if [  "$pro" = "" ];then
	echo "Problem Name(hit enter to use problem1)?";
	read pro
	if [  "$pro" = "" ];then
		pro=problem1
	fi
fi

if [ ! -d ./problems/$pro ];then
	echo "Problems(./problems/$pro) DO NOT exist";
	exit 1
fi
if [ ! -d ./hws/$pro ];then
	echo "User files(./hws/$pro) DO NOT exist";
	exit 1
fi
doRunAllHws(){
	echo "No.	Status	Name	Problem	Date";
for i in $(ls ./hws/$pro/); do
	if [ ! -d ./hws/$pro/$i ];then
		continue;
	fi
	#echo Checking User: $i
	name='UnknowName'
	rm -rf $run/*
	cp -r ./problems/$pro/test $run/
	cp ./scripts/test.sh $run/
	cp ./hws/$pro/$i/main.cpp $run/
	if [ -f "./hws/$pro/$i/main.cpp" ];then
		cd $run
		./test.sh main.cpp
		res=$?
		cd $cur
	else
		res=10
	fi
	if [ -f "./hws/$pro/$i/name.txt" ];then
		name=`cat ./hws/$pro/$i/name.txt|head -n 1`
		if [ -z $name ];then
			name='UnknowName'
		fi
	else
		name='UnknowName'
	fi

	time=`date +%Y-%m-%d_%H:%M`
	echo -n $i"	"
	printErr $res
	echo -n "	$name	$pro	$time"
	echo ;
done
}
doRunAllHws |tee ./hws/$pro/result.txt

exit 0
