

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m;
	ofstream outFile;
	outFile.open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	outFile<<a<<endl;
	outFile<<b<<"\t"<<b-a<<endl;
	outFile<<c<<"\t"<<c-b<<endl;
	outFile<<d<<"\t"<<d-c<<endl;
	outFile<<e<<"\t"<<e-d<<endl;
	outFile<<f<<"\t"<<f-e<<endl;
	outFile<<g<<"\t"<<g-f<<endl;
	outFile<<h<<"\t"<<h-g<<endl;
	outFile<<i<<"\t"<<i-h<<endl;
	outFile<<j<<"\t"<<j-i<<endl;
	outFile<<k<<"\t"<<k-j<<endl;
	outFile<<l<<"\t"<<l-k<<endl;
	outFile.close();
	cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12<<endl;

}

