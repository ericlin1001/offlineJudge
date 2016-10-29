#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
	ofstream outData;
	outData.open("tempdata.dat");
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
	outData.close();
	cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12.0<<endl;
	return 0;
}
