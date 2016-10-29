#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile;
	ofstream outFile;
	inFile.open("tempdata.dat");
	outFile.open("result.dat");
	float tem1,tem2,tem3,tem4,tem5,tem6,tem7,tem8,tem9,tem10,tem11,tem12;
	float num,aver;
	inFile>>tem1>>tem2>>tem3>>tem4>>tem5>>tem6>>tem7>>tem8>>tem9>>tem10>>tem11>>tem12>>num>>aver;
	aver=(tem1+tem2+tem3+tem4+tem5+tem6+tem7+tem8+tem9+tem10+tem11+tem12)/float(12);
	cout<<aver<<endl;
	outFile<<tem1<<endl;
	num=tem2-tem1;
	outFile<<tem2<<'\t'<<num<<endl;
	num=tem3-tem2;
	outFile<<tem3<<'\t'<<num<<endl;
	num=tem4-tem3;
	outFile<<tem4<<'\t'<<num<<endl;
	num=tem5-tem4;
	outFile<<tem5<<'\t'<<num<<endl;
	num=tem6-tem5;
	outFile<<tem6<<'\t'<<num<<endl;
	num=tem7-tem6;
	outFile<<tem7<<'\t'<<num<<endl;
	num=tem8-tem7;
	outFile<<tem8<<'\t'<<num<<endl;
	num=tem9-tem8;
	outFile<<tem9<<'\t'<<num<<endl;
	num=tem10-tem9;
	outFile<<tem10<<'\t'<<num<<endl;
	num=tem11-tem10;
	outFile<<tem11<<'\t'<<num<<endl;
	num=tem12-tem11;
	outFile<<tem12<<'\t'<<num<<endl;
	inFile.close();
	outFile.close();
	return 0;
}
