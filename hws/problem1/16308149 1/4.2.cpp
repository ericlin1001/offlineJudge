#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l;
	ofstream outData;
	outData .open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	outData<<a<<endl;
	outData<<b<<"	"<<b-a<<endl;
	outData<<c<<"	"<<c-b<<endl;
	outData<<d<<"	"<<d-c<<endl;
	outData<<e<<"	"<<e-d<<endl;
	outData<<f<<"	"<<f-e<<endl;
	outData<<g<<"	"<<g-f<<endl;
	outData<<h<<"	"<<h-g<<endl;
	outData<<i<<"	"<<i-h<<endl;
	outData<<j<<"	"<<j-i<<endl;
	outData<<k<<"	"<<k-j<<endl;
	outData<<l<<"	"<<l-k<<endl;
	cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12.0<<endl;
	outData.close();
	return 0;
}
