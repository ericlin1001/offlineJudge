#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float temp[12];
	float sum=0.0;
	
	for(int i=0;i<12;i++)
	{
	    cin>>temp[i];
	    sum+=temp[i];
	}
	
	ofstream outFile;
	outFile.open("tempdata.dat");
	outFile<<temp[0]<<endl;
	for(int i=1;i<12;i++)
	    outFile<<temp[i]<<"\t"<<temp[i]-temp[i-1]<<endl;
	outFile<<sum/12<<"\t"<<endl;
	outFile.close();
	return 0;
} 
