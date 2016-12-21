#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outData;
	outData.open("tempdata.dat");
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	m=b-a;
	n=c-b;
	o=d-c;
	p=e-d;
	q=f-e;
	r=g-f;
	s=h-g;
	t=i-h;
	u=j-i;
	v=k-j;
	w=l-k;
	x=(a+b+c+d+e+f+g+h+i+j+k+l)/12.0;
	outData<<a<<endl;
	outData<<b<<'\t'<<m<<endl;
	outData<<c<<'\t'<<n<<endl;
	outData<<d<<'\t'<<o<<endl;
	outData<<e<<'\t'<<p<<endl;
	outData<<f<<'\t'<<q<<endl;
	outData<<g<<'\t'<<r<<endl;
	outData<<h<<'\t'<<s<<endl;
	outData<<i<<'\t'<<t<<endl;
	outData<<j<<'\t'<<u<<endl;
	outData<<k<<'\t'<<v<<endl;
	outData<<l<<'\t'<<w<<endl;
	cout<<x<<endl;
	return 0;
}
