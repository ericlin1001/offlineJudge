#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float e,f,g,h;
	cin>>a>>b>>c>>d;
	e=(a+b+c+d)/4.0;
	f=(a-e)*(a-e)+(b-e)*(b-e)+(c-e)*(c-e)+(d-e)*(d-e);
	g=f/4;
	h=sqrt(g);
	cout<<e<<'\t'<<h<<endl;
	return 0;
}
