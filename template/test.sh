#!/bin/bash
res=0;
g++ -o main main.cpp
if [ $? -ne 0 ];then
res=1
fi

cat input1.txt |./main >useroutput1.txt
if [ $? -ne 0 ];then
res=2
fi

diff useroutput1.txt output1.txt
if [ $? -ne 0 ];then
res=3
fi

diff tempdata.dat outfile1.txt
if [ $? -ne 0 ];then
res=4
fi
exit $res
echo res=$res
