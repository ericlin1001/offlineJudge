#include <iostream>
#include<cmath>

using namespace std;

int x1,x2,x3,x4;
float m,s,a,b,c,d,e;

int main()
{
	cin>>x1>>x2>>x3>>x4;
	m=(x1+x2+x3+x4)/4.0;
	a=(x1-m)*(x1-m);
	b=(x2-m)*(x2-m);
	c=(x3-m)*(x3-m);
	d=(x4-m)*(x4-m);
	e=(a+b+c+d)/4.0;
	s=pow(e,0.5);
	cout<<m<<'\t'<<s<<endl;
	return 0;

}
