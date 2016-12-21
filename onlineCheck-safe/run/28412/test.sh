#!/bin/bash
diffArgs='';
Err_Ok=0
Err_Compile=1
Err_Runtime=2
Err_Stdout=3
Err_Stderr=4
Err_Dir=5
Err_Timeout=7
###
userLog="`pwd`/error.log"
userInputLog="`pwd`/input.log"
printErr(){
	type=$1
	case $type in 
		$Err_Ok)echo "Accepted";;
		$Err_Compile)echo "Compile Error";;
		$Err_Runtime)echo "Runtime Error";;
		$Err_Stdout)echo "Wrong Answer";;
		$Err_Stderr)echo "Wrong Stderr";;
		$Err_Dir)echo "Output files Error";;
		$Err_Timeout)echo "Timeout Error";;
	esac
}
compile(){
	rm -f main
	g++ -o ./main $1 >$userLog 2>&1
	if [ $? -ne 0 ];then
		return $Err_Compile
	fi
	return 0;
}

runTest(){
	dir=$1
	bin=$2
	#
	curDir=./curDir
	targetDir=../targetDir
	stdin=../stdin
	stdout=../stdout
	stderr=../stderr
	###
	userStdout=../userStdout.txt
	userStderr=../userStderr.txt
	res=0;
	##
	if [ ! -d $dir/$curDir ];then
		mkdir $dir/$curDir;
	fi
	cp $bin $dir/$curDir/
	cd $dir/$curDir
	curDir=./
	## Running the program
	#cat $stdin |./main >$userStdout 2>$userStderr
	cat $stdin |timeout 2s ./main >$userStdout 2>$userStderr
	#cat $stdin |timeout 2s ./main >$userStdout
	## End Running
	ret=$?;

	if [ $ret -eq 124 ];then
		res=$Err_Timeout
		return $res
	fi

	if [ $ret -ne 0 ];then
		res=$Err_Runtime
		return $res
	fi

	#diff $userStdout $stdout >/dev/null 2>&1
	diff -u $diffArgs $userStdout $stdout >$userLog 2>&1
	if [ $? -ne 0 ];then
		res=$Err_Stdout
		cat $stdin >$userInputLog;
		return $res
	fi

	if [ -f $stderr ];then
	diff -u $diffArgs $userStderr $stderr >$userLog 2>&1
	if [ $? -ne 0 ];then
		res=$Err_Stderr
		return $res
	fi
fi


	rm -f main
	if [ -d $targetDir ]; then
	diff -u $diffArgs -r ./ $targetDir >$userLog 2>&1
	if [ $? -ne 0 ];then
		res=$Err_Dir
		return $res
	fi
fi
	return 0;
}
main(){
	if [ "$2" = "1" ];then
		diffArgs='-ZBb';
	fi
compile $1
res=$?;
if [ $res -ne 0 ];then
	return $res
fi
cur=`pwd`
for i in $(ls ./test/);do
	testCaseDir=$cur/test/$i
	lastDir=`pwd`
	runTest $testCaseDir $cur/main
	res=$?
	cd $lastDir
	if [ $res -ne 0 ];then
		return $res
	fi
done
return 0;
}
main $1 $2
res=$?
exit $res
