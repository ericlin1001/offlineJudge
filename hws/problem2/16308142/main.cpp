#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float x,z,s;
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4.0;
	z=pow(a-x,2)+pow(b-x,2)+pow(c-x,2)+pow(d-x,2);
	s=pow(z/4,1.0/2.0);
	cout<<"The mean is "<<x<<endl;
	cout<<"The standard deviationis "<<s<<endl;
	return 0;
}
