#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m;
	ofstream tempdata;
	
	tempdata.open("tempdata.dat");
	
	cout<<"Please enter 12 temperatures:"<<endl;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	tempdata<<a<<'\t'<<endl;
	tempdata<<b<<'\t'<<b-a<<endl;
	tempdata<<c<<'\t'<<c-b<<endl;
	tempdata<<d<<'\t'<<d-c<<endl;
	tempdata<<e<<'\t'<<e-d<<endl;
	tempdata<<f<<'\t'<<f-e<<endl;
	tempdata<<g<<'\t'<<g-f<<endl;
	tempdata<<h<<'\t'<<h-g<<endl;
	tempdata<<i<<'\t'<<i-h<<endl;
	tempdata<<j<<'\t'<<j-i<<endl;
	tempdata<<k<<'\t'<<k-j<<endl;
	tempdata<<l<<'\t'<<l-k<<endl;
	        
	tempdata.close();
	m=(a+b+c+d+e+f+g+h+i+j+k+l)/12.0;
	cout<<m<<endl;
	
	return 0;
	        
	
}
