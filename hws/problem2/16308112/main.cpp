#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,e,f,g;
	cin>>a>>b>>c>>d;
	f=(a+b+c+d)/4.0;
	e=pow(a-f,2)+pow(b-f,2)+pow(c-f,2)+pow(d-f,2);
	g=sqrt(e/4.0);
	cout<<f<<'\t'<<g<<endl;
	return 0;
}
