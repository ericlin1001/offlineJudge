#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float x,y,s;
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4.0;
	y=pow(a-x,2)+pow(b-x,2)+pow(c-x,2)+pow(d-x,2);
	s=pow(y/4.0,1.0/2.0);
	cout<<"The mean is "<<x<<endl;
	cout<<"The standard deviationis "<<s<<endl;
	return 0;
}
