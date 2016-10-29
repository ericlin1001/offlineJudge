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
	while(a!=42.2)
	{
		float c;
		c=b-a;
		outData<<b<<"\t"<<c<<endl;
		a=b;
		cin>>b;
	}
	return 0;
}
