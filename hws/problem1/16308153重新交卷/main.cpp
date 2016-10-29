#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float temp1;
	float temp2;
	float temp3;
	float temp4;
	float temp5;
	float temp6;
	float temp7;
	float temp8;
	float temp9;
	float temp10;
	float temp11;
	float temp12;
	cin>>temp1>>temp2>>temp3>>temp4>>temp5>>temp6>>temp7>>temp8>>temp9>>temp10>>temp11>>temp12;
	float average;
	average=(temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8+temp9+temp10+temp11+temp12)/12.0;
	cout<<average<<endl;
	ofstream outFile;
	outFile.open("tempdata.dat");
	outFile<<temp1<<"\t"<<"\n"<<temp2<<"\t"<<temp2-temp1<<"\t"<<"\n"<<temp3<<"\t"<<temp3-temp2<<"\t"<<"\n"<<temp4<<"\t"<<temp4-temp3<<"\t"<<"\n"<<temp5<<"\t"<<temp5-temp4
    <<"\t"<<"\n"<<temp6<<"\t"<<temp6-temp5<<"\t"<<"\n"<<temp7<<"\t"<<temp7-temp6<<"\t"<<"\n"<<temp8<<"\t"<<temp8-temp7<<"\t"<<"\n"<<temp9<<"\t"<<temp9-temp8<<"\t"<<"\n"<<
    temp10<<"\t"<<temp10-temp9<<"\t"<<"\n"<<temp11<<"\t"<<temp11-temp10<<"\t"<<"\n"<<temp12<<"\t"<<temp12-temp11<<"\t"<<"\n";
    outFile.close();
    return 0;
}
