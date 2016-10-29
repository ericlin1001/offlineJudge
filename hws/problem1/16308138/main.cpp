#include<fstream>
#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
	ofstream outData;
    outData.open("tempdata.dat");
	
	float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,y12,y23,y34,y45,y56,y67,y78,y89,y910,y1011,y1112,z;
	y12=x1-x2;
	y23=x2-x3;
	y34=x3-x4;
	y45=x4-x5;
	y56=x5-x6;
	y67=x6-x7;
	y78=x7-x8;
	y89=x8-x9;
	y910=x9-x10;
	y1011=x10-x11;
	y1112=x10-x12;
	
	cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10>>x11>>x12;
	
	z=(x1+x2+x3+x4+x5+x6+x7+x8+x9+x10+x11+x12)/12;
	
	outData<<x1<<endl
	<<x2<<'\t'<<y12<<endl
	<<x3<<'\t'<<y23<<endl
	<<x4<<'\t'<<y34<<endl
	<<x5<<'\t'<<y45<<endl
	<<x6<<'\t'<<y56<<endl
	<<x7<<'\t'<<y67<<endl
	<<x8<<'\t'<<y78<<endl
	<<x9<<'\t'<<y89<<endl
	<<x10<<'\t'<<y910<<endl
	<<x11<<'\t'<<y1011<<endl
	<<x12<<'\t'<<y1112<<endl;
	
	cout<<z<<endl;
		
	outData.close();
	return 0;
}
