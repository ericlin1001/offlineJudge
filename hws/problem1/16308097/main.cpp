#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m;
	ofstream outData;
	outData.open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	outData<<fixed<<showpoint<<setprecision(1);
	outData<<a<<'\t'<<endl
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
	<<l<<'\t'<<l-k<<endl;
	outData.close();
	m=(a+b+c+d+e+f+g+h+i+j+k+l)/12;
	cout<<m<<endl;
	return 0;
}
