#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
ofstream outdata;
outdata.open("tempdata.dat");
float a,b,c,d,e,f,g,h,i,j,k,l,n,m,o,p,q,r,s,t,u,v,w,x;
cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
outdata<<fixed<<showpoint<<setprecision(1);
outdata<<a<<endl;
outdata<<b<<'\t'<<b-a;
outdata<<c<<'\t'<<c-a;
outdata<<d<<'\t'<<d-a;
outdata<<e<<'\t'<<e-a;
outdata<<f<<'\t'<<f-a;
outdata<<g<<'\t'<<g-a;
outdata<<h<<'\t'<<h-a;
outdata<<i<<'\t'<<i-a;
outdata<<j<<'\t'<<j-a;
outdata<<k<<'\t'<<k-a;
outdata<<l<<'\t'<<l-a;
cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12<<endl;
return 0;
}


