#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float g;
	float h;
	float i;
	float j;
	float k;
	float l;
	ofstream tempdata;
	
	tempdata.open("tempdata.dat");
	
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	tempdata<<a<<"\t"<<b<<"\t"<<b-a
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
	
	return 0;
	        
	
}
