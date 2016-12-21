#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outData;
	outData.open("tempdata.dat");
	float a,b,c,d,e,f,g,h,i,j,k,l;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	cin>>i>>j>>k>>l;
	outData<<a;
	outData<<b<<"\t"<<b-a;
	outData<<c<<"\t"<<c-b;
	outData<<d<<"\t"<<d-c;
	outData<<e<<"\t"<<e-d;
	outData<<f<<"\t"<<f-e;
	outData<<g<<"\t"<<g-f;
	outData<<h<<"\t"<<h-g;
	outData<<i<<"\t"<<i-h;
	outData<<j<<"\t"<<j-i;
	outData<<k<<"\t"<<k-j;
	outData<<l<<"\t"<<l-k;
	cout<<(a+b+c+d+e+f+g+h+i+k+j+l)/12;
	return 0;
	 
 } 
