#include<iostream>
#include<fstream>
using namespace std;
ofstream outData;
int main()
{
	float f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12;
	float d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11;
	float average;
	cin>>f1>>f2>>f3>>f4>>f5>>f6>>f7>>f8>>f9>>f10>>f11>>f12;
	outData.open("tempdata.dat");
	d1=f2-f1;
	d2=f3-f2;
	d3=f4-f3;
	d4=f5-f4;
	d5=f6-f5;
	d6=f7-f6;
	d7=f8-f7;
	d8=f9-f8;
	d9=f10-f9;
	d10=f11-f10;
	d11=f12-f11;
	outData<<f1<<endl;
	outData<<f2<<'\t'<<d1<<endl;
	outData<<f3<<'\t'<<d2<<endl;
	outData<<f4<<'\t'<<d3<<endl;
	outData<<f5<<'\t'<<d4<<endl;
	outData<<f6<<'\t'<<d5<<endl;
	outData<<f7<<'\t'<<d6<<endl;
	outData<<f8<<'\t'<<d7<<endl;
	outData<<f9<<'\t'<<d8<<endl;
	outData<<f10<<'\t'<<d9<<endl;
	outData<<f11<<'\t'<<d10<<endl;
	outData<<f12<<'\t'<<d11<<endl;
	outData.close();
	average=(f1+f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12)/12.0;
	cout<<average<<endl;
	return 0;
}
