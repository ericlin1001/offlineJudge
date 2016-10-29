#include<iostream>
#include<cmath>
using namespace std;
int a,b,c,d;
float e,f,g,h,m,i,s;
int main()
{
	cin>>a>>b>>c>>d;
	m=(a+b+c+d)/4.0;
	e=(a-m)*(a-m);
	f=(b-m)*(b-m);
	g=(c-m)*(c-m);
	h=(d-m)*(d-m);
	i=(e+f+g+h)/4.0;
	s=pow(i,0.5);
	cout<<m<<'\t'<<s<<endl;
	return 0;
}
