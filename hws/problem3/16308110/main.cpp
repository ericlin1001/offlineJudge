// 20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
	ifstream input;
	string a,b;
	cout<<"Please input filename:";
	cin>>a;
	input.open(a.c_str());
	input.ignore(200,',');
	input>>b;
	cout<<b<<endl;
	input.ignore(200,',');
	input>>b;
	cout<<b<<endl;
	input.ignore(200,',');
	input>>b;
	cout<<b<<endl;
	input.close();
	return 0;
}
