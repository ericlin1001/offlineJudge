#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile;
	float a,b,c,d,e,f,g,h,i,j,k,l,m;
	outFile.open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	m=(a+b+c+d+e+f+g+h+i+j+k+l)/12.0;
	cout<<m<<endl;
	outFile<<a<<endl;
	outFile<<b<<'\t'<<b-a<<endl;
	outFile<<c<<'\t'<<c-b<<endl;
	outFile<<d<<'\t'<<d-c<<endl;
	outFile<<e<<'\t'<<e-d<<endl;
	outFile<<f<<'\t'<<f-e<<endl;
	outFile<<g<<'\t'<<g-f<<endl;
	outFile<<h<<'\t'<<h-g<<endl;
	outFile<<i<<'\t'<<i-h<<endl;
	outFile<<j<<'\t'<<j-i<<endl;
	outFile<<k<<'\t'<<k-j<<endl;
	outFile<<l<<'\t'<<l-k<<endl;
	outFile.close();
	return 0;
}
