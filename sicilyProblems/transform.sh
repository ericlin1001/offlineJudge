#!/bin/bash
IFS=$'\n'
for i in `ls zip/*.zip` ;do
	echo $i
	name=`echo $i|awk '{print $4}'|awk -F'.' '{print $1}'`
	echo $name
	mkdir ./problems/$name  2>/dev/null
	unzip -qu "$i" -d ./problems/$name
	##*****inside a chapter***
	cd ./problems/$name
	t=`cat metadata.json|sed 's/,/ /g'|sed 's/\[/ /g'|sed 's/\]/ /g'|sed 's/"/ /g'`
	rm metadata.json
	rm .SET
	index=0;
	IFS=$' '
	for k in $t;do
		n[$index]=$k
		let index+=1;
	done
	IFS=$'\n'
	index=0;
	for j in `ls *.zip`;do
		d=${n[$index]};
		echo  save $j to $d
		unzip -qu $j -d $d
		rm $j
		let index+=1;
		#inside one problem
		cd $d
		mkdir test 2>/dev/null
		testCaseNum=0;
		for l in `cat .DIR`;do
			td="test/$testCaseNum"
			mkdir $td
			myin=`echo $l|awk '{print $1}'`
			myout=`echo $l|awk '{print $2}'`
			mv $myin $td/stdin
			mv $myout $td/stdout
			let testCaseNum+=1;
		done
		rm .DIR
		cd ..
		#outside one problem

	done
	cd ../../
	##*****outside a chapter***
	IFS=$'\n'
done
