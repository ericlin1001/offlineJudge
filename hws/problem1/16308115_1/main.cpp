#include<iostream>
#include<fstream>
using namespace std;
ofstream outFile;
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
float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11;
int main()
{outFile.open("tempdata.dat");
cin>>temp1>>temp2>>temp3>>temp4>>temp5>>temp6>>temp7>>temp8>>temp9>>temp10>>temp11>>temp12;
x1=temp2-temp1;
x2=temp3-temp2;
x3=temp4-temp3;
x4=temp5-temp4;
x5=temp6-temp5;
x6=temp7-temp6;
x7=temp8-temp7;
x8=temp9-temp8;
x9=temp10-temp9;
x10=temp11-temp10;
x11=temp12-temp11;
outFile<<temp1<<endl;
outFile<<temp2<<"\t"<<x1<<endl;
outFile<<temp3<<"\t"<<x2<<endl;
outFile<<temp4<<"\t"<<x3<<endl;
outFile<<temp5<<"\t"<<x4<<endl;
outFile<<temp6<<"\t"<<x5<<endl;
outFile<<temp7<<"\t"<<x6<<endl;
outFile<<temp8<<"\t"<<x7<<endl;
outFile<<temp9<<"\t"<<x8<<endl;
outFile<<temp10<<"\t"<<x9<<endl;
outFile<<temp11<<"\t"<<x10<<endl;
outFile<<temp12<<"\t"<<x11<<endl;
float avg;
avg=(temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8+temp9+temp10+temp11+temp12)/12;
cout<<avg;
return 0;
}


