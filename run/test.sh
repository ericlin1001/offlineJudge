#!/bin/bash
runTest(){
in=$1
out=$2
useroutfile=$3
outfile=$4

res=0;
g++ -o main main.cpp
if [ $? -ne 0 ];then
res=1
fi

cat $in |./main >tmpout.txt
if [ $? -ne 0 ];then
res=2
fi

diff tmpout.txt $out
if [ $? -ne 0 ];then
res=3
fi

diff $useroutfile $outfile
if [ $? -ne 0 ];then
res=4
fi
return $res
}
runTest input1.txt output1.txt tempdata.dat outfile1.txt >error.log 2>&1
