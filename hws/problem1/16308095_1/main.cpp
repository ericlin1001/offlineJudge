#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l;
	ofstream outdata;
	outdata.open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	cout<<a<<endl;
	cout<<b<<'\t'<<b-a<<endl;
	cout<<c<<'\t'<<c-b<<endl;
	cout<<d<<'\t'<<d-c<<endl;
	cout<<e<<'\t'<<e-d<<endl; 
	cout<<f<<'\t'<<f-e<<endl;
	cout<<g<<'\t'<<g-f<<endl;
	cout<<h<<'\t'<<h-g<<endl;
	cout<<i<<'\t'<<i-h<<endl;
	cout<<j<<'\t'<<j-i<<endl;
	cout<<k<<'\t'<<k-j<<endl;
	cout<<l<<'\t'<<l-k<<endl;
	outdata.close() ;
	return 0;
}
