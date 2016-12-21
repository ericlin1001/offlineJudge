#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float m,s,x;
	cin>>a>>b>>c>>d;
	m=(a+b+c+d)/4.0;
	x=(pow((a-m),2)+pow((b-m),2)+pow((c-m),2)+pow((d-m),2))/4.0;
	s=sqrt(x);
	cout<<m<<'\t'<<s<<endl;
	return 0;
}


