// 18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
	float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	cout<<"Please input 12 temperatures:";
	cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10>>a11>>a12;
	ofstream out;
	out.open("tempdata.dat");
	out<<a1<<endl;
	out<<a2<<'\t'<<a2-a1<<endl;
	out<<a3<<'\t'<<a3-a2<<endl;
	out<<a4<<'\t'<<a4-a3<<endl;
	out<<a5<<'\t'<<a5-a4<<endl;
	out<<a6<<'\t'<<a6-a5<<endl;
	out<<a7<<'\t'<<a7-a6<<endl;
	out<<a8<<'\t'<<a8-a7<<endl;
	out<<a9<<'\t'<<a9-a8<<endl;
	out<<a10<<'\t'<<a10-a9<<endl;
	out<<a11<<'\t'<<a11-a10<<endl;
	out<<a12<<'\t'<<a12-a11<<endl;
	out.close();
	cout<<(a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12)/12<<endl;
	return 0;
}

