#include<iostream>
#include<fstream>
using namespace std;
int main()

{
	
	float a,b,c,d,e,f,g,h,i,j,k,l;
	float m;
	ofstream outfile;
	outfile.open("tempdate.dat");
	
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	m=(a+b+c+d+e+f+g+h+i+j+k+l+j+k+l)/12;
	
	outfile<<a<<endl;
	outfile<<b<<'\t'<<b-a<<endl;
	outfile<<c<<'\t'<<c-b<<endl;
	outfile<<d<<'\t'<<d-c<<endl;
	outfile<<e<<'\t'<<e-d<<endl;
	outfile<<f<<'\t'<<f-e<<endl;
	outfile<<g<<'\t'<<g-f<<endl;
	outfile<<h<<'\t'<<h-g<<endl;
	outfile<<i<<'\t'<<i-h<<endl;
	outfile<<j<<'\t'<<j-i<<endl;
	outfile<<k<<'\t'<<k-j<<endl;
	outfile<<l<<'\t'<<l-k<<endl;
	outfile<<m<<ednl; 
	return 0;
	
	
}




