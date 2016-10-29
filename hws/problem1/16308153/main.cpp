#include<iostream>

#include<iomanip>

#include<fstream>

using namespace std;

int main()
{
	float temp1; float A;
	float temp2; float B;
	float temp3; float C;
	float temp4; float D;
	float temp5; float E;
	float temp6; float F;
	float temp7; float G;
	float temp8; float H;
	float temp9; float I;
	float temp10; float J;
	float temp11; float K;
	float temp12;
	ifstream inFile;
	ofstream outFile;
	inFile.open("input.dat");
	outFile.open("tempdata.dat");
	inFile>>temp1>>temp2>>temp3>>temp4>>temp5>>temp6>>temp7>>temp8>>temp9>>temp10>>temp11>>temp12;
	A=temp2-temp1; B=temp3-temp2; C=temp4-temp3; D=temp5-temp4; E=temp6-temp5; F=temp7-temp6; G=temp8-temp7; H=temp9-temp8; I=temp10-temp9; J=temp11-temp10; K=temp12-temp11;
	outFile<<temp1<<"\t"<<"\n"<<temp2<<"\t"<<A<<"\n"<<temp3<<"\t"<<B<<"\t"<<C<<"\n"<<temp5<<"\t"<<D<<"\n"<<temp6<<"\t"<<E<<"\n"<<temp7<<"\t"<<F<<"\n"<<temp8<<"\t"
	<<G<<"\n"<<temp9<<"\t"<<H<<"\n"<<temp10<<"\t"<<I<<"\n"<<temp11<<"\t"<<J<<"\n"<<temp12<<"\t"<<K<<"\n";
	inFile.close();
	outFile.close();
	float average;
	average=(temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8+temp9+temp10+temp11+temp12)/12.0;
	cout<<average<<endl;
	return 0;
}
