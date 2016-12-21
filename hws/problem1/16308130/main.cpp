#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12;
	float y1,y2,y3,y4,y5,y6,y7,y8,y9,y10,y11;
	ofstream outFile;
	cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10>>x11>>x12;
	outFile.open("tempdata.dat");
	y1=x2-x1;y2=x3-x2;y3=x4-x3;y4=x5-x4;y5=x6-x5;y6=x7-x6;y7=x8-x7;y8=x9-x8;y9=x10-x9;y10=x11-x10;y11=x12-x11;
	outFile<<x1<<"\n"<<x2<<"\t"<<y1<<"\n"<<x3<<"\t"<<y2<<"\n"<<x4<<"\t"<<y3<<"\n"<<x5<<"\t"<<y4<<"\n"<<x6<<"\t"<<y5<<"\n"<<x7<<"\t"
	<<y6<<"\n"<<x8<<"\t"<<y7<<"\n"<<x9<<"\t"<<y8<<"\n"<<x10<<"\t"<<y9<<"\n"<<x11<<"\t"<<y10<<"\n"<<x12<<"\t"<<y11<<endl;
	return 0;
 } 
