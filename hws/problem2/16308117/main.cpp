#include<iostream>
#include<cmath>
using namespace std;
float g(float a,float e)
{
float h;
h=(a-e)*(a-e);
return h;
}
int main()
{
	int a;
	int b;
    int c;
    int d;
    float s;
    cin>>a>>b>>c>>d;
    float e;
	e=(float(a+b+c+d))/4;
	s=sqrt(g(a,e)+g(b,e)+g(c,e)+g(d,e)/4)
	cout<<s<<endl;
	return 0;
}
