#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l;
	ofstream outFile;
	
	outFile.open("tempdata.dat");
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	outFile<<a<<endl;
	outFile<<b<<'\t'<<(b-a)<<endl;
	outFile<<c<<'\t'<<(c-b)<<endl;
	outFile<<d<<'\t'<<(d-c)<<endl;
	outFile<<e<<'\t'<<(e-d)<<endl;
	outFile<<f<<'\t'<<(f-e)<<endl;
	outFile<<g<<'\t'<<(g-f)<<endl;
	outFile<<h<<'\t'<<(h-g)<<endl;
	outFile<<i<<'\t'<<(i-h)<<endl;
	outFile<<j<<'\t'<<(j-i)<<endl;
	outFile<<k<<'\t'<<(k-j)<<endl;
	outFile<<l<<'\t'<<(l-k)<<endl;
	
	cout<<a<<endl;
	cout<<b<<'\t'<<(b-a)<<endl;
	cout<<c<<'\t'<<(c-b)<<endl;
	cout<<d<<'\t'<<(d-c)<<endl;
	cout<<e<<'\t'<<(e-d)<<endl;
	cout<<f<<'\t'<<(f-e)<<endl;
	cout<<g<<'\t'<<(g-f)<<endl;
	cout<<h<<'\t'<<(h-g)<<endl;
	cout<<i<<'\t'<<(i-h)<<endl;
	cout<<j<<'\t'<<(j-i)<<endl;
	cout<<k<<'\t'<<(k-j)<<endl;
	cout<<l<<'\t'<<(l-k)<<endl;
	cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12<<endl;
	
    outFile.close();
	return 0;
}
