#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out1;
	int i,j;
	float x[12];
	out1.open("tempdata.dat");
	for(i=0;i<12;i++)
		cin>>x[i];
	out1<<x[0]<<endl;
	for(i=1;i<12;i++)
		out1<<x[i]<<'\t'<<x[i]-x[i-1]<<endl;
	out1.close();
	return 0;
}
