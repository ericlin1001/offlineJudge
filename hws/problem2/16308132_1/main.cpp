#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	float o,p,q,r;
	o=float(a+b+c+d)/float(4);
	p=pow(a-o,2)+pow(b-o,2)+pow(c-o,2)+pow(d-o,2);
	q=p/float(4);
	r=sqrt(q);
	cout<<o<<'\t'<<r<<endl;
	return 0;
}
