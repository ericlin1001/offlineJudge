#!/bin/bash
pro=$1
if [  "$pro" = "" ];then
	echo "Problem Name(hit enter to use problem1)?";
	read pro
	if [  "$pro" = "" ];then
		pro=problem1
	fi
fi

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

if [ ! -d ./problems/$pro ];then
	echo "Problems(./problems/$pro) DO NOT exist";
	exit 1
fi
if [ ! -d ./hws/$pro ];then
	echo "User files(./hws/$pro) DO NOT exist";
	exit 1
fi

for i in $(ls ./hws/$pro/); do
	#echo Checking User: $i
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
	###begin run ###
	echo -n $i"	"
	printErr $res
	echo ;
done

exit 0
