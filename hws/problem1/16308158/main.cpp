#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("temoeratures");
	outFile.open("tempdata");
	
	float a,b,c,d,e,f,g,h,i,j,k,l;
	
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	
	outFile<<a<<endl
	<<b<<"\t"<<b-a<<endl
	<<c<<"\t"<<c-b<<endl
	<<d<<"\t"<<d-c<<endl
	<<e<<"\t"<<e-d<<endl
	<<f<<"\t"<<f-e<<endl
	<<g<<"\t"<<g-f<<endl
	<<h<<"\t"<<h-g<<endl
	<<i<<"\t"<<i-h<<endl
	<<j<<"\t"<<j-i<<endl
	<<k<<"\t"<<k-j<<endl
	<<l<<"\t"<<l-k<<endl;
	
	inFile.close();
	outFile.close();
	return 0;
    }
