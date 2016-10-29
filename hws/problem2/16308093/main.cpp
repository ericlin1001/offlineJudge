#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int a,b,c,d;
	float e,f,g,h;
	cin>>a>>b>>c>>d;
	e=float(a+b+c+d)/float(4);
	f=pow(a-e,2)+pow(b-e,2)+pow(c-e,2)+pow(d-e,2);
	g=f/float(4);
	h=sqrt(g);
	cout<<e<<'\t'<<h<<endl;
	return 0;
	
}
