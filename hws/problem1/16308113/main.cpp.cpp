#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l;
	ofstream outData;
	outData.open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	outData<<a<<endl;
	outData<<b<<"\t"<<b-a<<endl;
	outData<<c<<"\t"<<c-b<<endl;
	outData<<d<<"\t"<<d-c<<endl;
	outData<<e<<"\t"<<e-d<<endl;
	outData<<f<<"\t"<<f-e<<endl;
	outData<<g<<"\t"<<g-f<<endl;
	outData<<h<<"\t"<<h-g<<endl;
	outData<<i<<"\t"<<i-h<<endl;
	outData<<j<<"\t"<<j-i<<endl;
	outData<<k<<"\t"<<k-j<<endl;
	outData<<l<<"\t"<<l-k<<endl;
	cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12.0<<endl;
	outData.close();
	return 0;
}
