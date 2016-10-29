#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float temp[12];
	
	cout<<"Enter a series of 12 temperatures\n";
	for(int i=0;i<12;i++)
	    cin>>temp[i];
	
	ofstream outFile;
	outFile.open("tempdata.dat");
	outFile<<temp[0]<<endl;
	for(int i=1;i<12;i++)
	    outFile<<temp[i]<<"\t"<<temp[i]-temp[i-1]<<endl;
	outFile.close();
	return 0;
} 
