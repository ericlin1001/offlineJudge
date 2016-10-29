#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,M;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	M=(a+b+c+d+e+f+g+h+i+j+k+l)/12;
	ofstream outfile;
	outfile.open("temdata.dat");
	outfile<<a<<endl
	<<b<<'\t'<<b-a<<endl
	<<c<<'\t'<<c-b<<endl
	<<d<<'\t'<<d-c<<endl
	<<e<<'\t'<<e-d<<endl
	<<f<<'\t'<<f-e<<endl
	<<g<<'\t'<<g-f<<endl
	<<h<<'\t'<<h-g<<endl
	<<i<<'\t'<<i-h<<endl
	<<j<<'\t'<<j-i<<endl
	<<k<<'\t'<<k-j<<endl
	<<l<<'\t'<<l-k<<endl
	<<M;
	outfile.close();
	return 0;
}
