#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	ofstream outData;
	outData.open("tempdata.dat");
	cin>>a>>b;
	outData<<a<<endl;
	while(b!=42.2)
	{
		float c;
		c=b-a;
		outData<<b<<"\t"<<c<<endl;
		a=b;
		cin>>b;
	}
	outData<<b<<"\t"<<b-a<<endl;
	return 0;
}
