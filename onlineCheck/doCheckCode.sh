#!/bin/bash
echo "<hr/>";
isDebug=true;
isDebug=false;
pro="./problems/$1/$2"
isLoose=$4
if $isDebug;then
echo $pro
fi
file=$3
#echo $pro
if [ ! -d $pro ];then
	echo "Can't find the problem<br/>";
	exit 0;
fi
proTitle=`cat $pro/metadata.json|awk -F',' '{print $2}'|awk -F':' '{print $2}'`
echo "Problem:<b>" $proTitle "</b><br/>"

#*****check the code*******



Err_Ok=0
Err_Compile=1
Err_Runtime=2
Err_Stdout=3
Err_Stderr=4
Err_Dir=5
Err_NoMain=6
Err_Timeout=7
printErr(){
	type=$1
	case $type in 
		$Err_Ok)echo -n  "Accepted";;
	$Err_Compile)echo -n  "Compile Error";;
$Err_Runtime)echo -n  "Runtime Error";;
		$Err_Stdout)echo -n  "Wrong Answer";;
	$Err_Stderr)echo -n  "Wrong Stderr";;
$Err_Dir)echo -n  "Output files Error";;
		$Err_NoMain)echo -n  "Can't Find main.cpp";;
	$Err_Timeout)echo "Timeout Error";;
10)echo -n  "Can't find main.cpp";;
	esac
}
####

cur=`pwd`

run=$cur/run/$RANDOM
mkdir $run 2>/dev/null
if $isDebug; then
	echo $run
fi

res=0

#build the necessary compiling files.
cp $file $run/source.cpp
rm $file
cp ./scripts/test.sh $run/
cp -r $pro/test $run/
if [ -f $pro/framework.cpp ];then
	cp $pro/framework.cpp $run/
fi

cd $run
if [ -f framework.cpp ];then
	./test.sh framework.cpp  $isLoose
else
	./test.sh source.cpp  $isLoose
fi
res=$?
echo "Status:<b>";
printErr $res
echo "</b><br/>";
echo -n "<b>Input counter example:</b><textarea>"
cat ./input.log
echo "</textarea>"
echo "<h3>Error.log:</h3>";
echo "说明：红色的为你多输出的，绿色的为你少输出的。其它的不懂不用管。</br>"

cat ./error.log|$cur/colorDiff.sh
cd $cur
if ! $isDebug ;then
rm -rf $run
fi
exit 0
