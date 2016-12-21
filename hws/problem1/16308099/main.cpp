#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out;
	out.open("tempdata.dat"); 
	float tem[12];
	int i;
	for(i=0;i<12;i++)
	{
		cin>>tem[i];
		if(i<1)
		{
			out<<tem[i]<<endl;
		}
		else
		{
			out<<tem[i]<<'\t'<<tem[i]-tem[i-1]<<endl;
		}
	}
	out.close() ;
	return 0;
}
