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
	tempdata<<a<<"\t"<<endl
	        <<b<<"\t"<<b-a<<"\t"
	        <<c<<"\t"<<c-b<<"\t"
	        <<d<<"\t"<<d-c<<"\t"
	        <<e<<"\t"<<e-d<<"\t"
	        <<f<<"\t"<<f-e<<"\t"
	        <<g<<"\t"<<g-f<<"\t"
			<<h<<"\t"<<h-g<<"\t"
	        <<i<<"\t"<<i-h<<"\t"
	        <<j<<"\t"<<j-i<<"\t"
	        <<k<<"\t"<<k-j<<"\t"
	        <<l<<"\t"<<l-k<<"\t"<<endl;
	        
	tempdata.close();
	m=(a+b+c+d+e+f+g+h+i+j+k+l)/12.0;
	cout<<"The average temperature is:"<<m<<endl;
	
	return 0;
	        
	
}
