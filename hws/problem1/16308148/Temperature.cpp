#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	float a,b,c,s,average,i;
	ofstream outdata;
    outdata.open("tempdata.dat");
	cin>>a;
	outdata<<a<<endl;
	s=a;
	b=a;
	for(i=1;i<12;i++)
	{
		cin>>a;
	    c=a-b;
        b=a;
	    outdata<<a<<"\t"<<c<<endl;
		s=s+a;
	}
    average=s/12;
	cout<<average;
	outdata.close();
	return 0;
}