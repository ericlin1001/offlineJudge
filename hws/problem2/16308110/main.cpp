// 19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(int argc, char* argv[])
{
	int a,b,c,d;
	float x,y;
	cout<<"Please input 4 integer:";
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4.0;
	y=sqrt((a-x)*(a-x)+(b-x)*(b-x)+(c-x)*(c-x)+(d-x)*(d-x))/2.0;
	cout<<fixed<<setprecision(3);
	cout<<"The mean is:"<<x<<endl;
	cout<<"The standard deviation is:"<<y<<endl;
	return 0;
}
