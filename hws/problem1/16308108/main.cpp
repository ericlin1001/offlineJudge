



#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
	float Temp1,Temp2,Temp3,Temp4,Temp5,Temp6,Temp7,Temp8,Temp9,Temp10,Temp11,Temp12;
	float temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12;
	float average;
	ofstream outData;
	outData.open("tempdata.dat");
	cin>>Temp1>>Temp2>>Temp3>>Temp4>>Temp5>>Temp6>>Temp7>>Temp8>>Temp9>>Temp10>>Temp11>>Temp12;
	
	temp2=Temp2-Temp1;
	temp3=Temp3-Temp2;
	temp4=Temp4-Temp3;
	temp5=Temp5-Temp4;
	temp6=Temp6-Temp5;
	temp7=Temp7-Temp6;
	temp8=Temp8-Temp7;
	temp9=Temp9-Temp8;
	temp10=Temp10-Temp9;
	temp11=Temp11-Temp10;
	temp12=Temp12-Temp11;
	
	outData<<Temp1<<endl;
	outData<<Temp2<<"\t"<<temp2<<endl;
	outData<<Temp3<<"\t"<<temp3<<endl;
	outData<<Temp4<<"\t"<<temp4<<endl;
	outData<<Temp5<<"\t"<<temp5<<endl;
	outData<<Temp6<<"\t"<<temp6<<endl;
	outData<<Temp7<<"\t"<<temp7<<endl;
	outData<<Temp8<<"\t"<<temp8<<endl;
	outData<<Temp9<<"\t"<<temp9<<endl;
	outData<<Temp10<<"\t"<<temp10<<endl;
	outData<<Temp11<<"\t"<<temp11<<endl;
	outData<<Temp12<<"\t"<<temp12<<endl;
	
	outData.close();
	
	average=(Temp1+Temp2+Temp3+Temp4+Temp5+Temp6+Temp7+Temp8+Temp9+Temp10+Temp11+Temp12)/12;
	cout<<average<<endl;
	return 0;
	
	
	
	
	
}