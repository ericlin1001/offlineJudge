#include <iostream>
#include <fstream>
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
  float d1;
  float d2;
  float d3;
  float d4;
  float d5;
  float d6;
  float d7;
  float d8;
  float d9;
  float d10;
  float d11;
  float average;
  ofstream outData;
  outData.open("tempdata.dat");
  cin>>temp1>>temp2>>temp3>>temp4>>temp5>>temp6>>temp7>>temp8>>temp9>>temp10>>temp11>>temp12;
  d1=temp2-temp1;
  d2=temp3-temp2;
  d3=temp4-temp3;
  d4=temp5-temp4;
  d5=temp6-temp5;
  d6=temp7-temp6;
  d7=temp8-temp7;
  d8=temp9-temp8;
  d9=temp10-temp9;
  d10=temp11-temp10;
  d11=temp12-temp11;
  outData<<temp1<<endl;
  outData<<temp2<<"\t"<<d1<<endl;
  outData<<temp3<<"\t"<<d2<<endl;
  outData<<temp4<<"\t"<<d3<<endl;
  outData<<temp5<<"\t"<<d4<<endl;
  outData<<temp6<<"\t"<<d5<<endl;
  outData<<temp7<<"\t"<<d6<<endl;
  outData<<temp8<<"\t"<<d7<<endl;
  outData<<temp9<<"\t"<<d8<<endl;
  outData<<temp10<<"\t"<<d9<<endl;
  outData<<temp11<<"\t"<<d10<<endl;
  outData<<temp12<<"\t"<<d11<<endl;
  average=(temp1+temp2+temp3+temp4+temp5+temp6+temp7+temp8+temp9+temp10+temp11+temp12)/12;
  cout<<average<<endl;
  return 0;
}
