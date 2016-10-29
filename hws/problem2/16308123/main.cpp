#include <iostream>
#include <cmath>
using namespace std;
float x1,x2,x3,x4,m,a,b,c,d,A,s;
int main()
{
	cin>>x1>>x2>>x3>>x4;
	m=(x1+x2+x3+x4)/4;
	a=(x1-m)*(x1-m);
	b=(x2-m)*(x2-m);
	c=(x3-m)*(x3-m);
	d=(x4-m)*(x4-m);
	A=(a+b+c+d)/4;
	s=pow(A,0.5);
	cout<<m<<endl;
	cout<<s<<endl;
	
}

