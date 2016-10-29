#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	float x1;
	float x2;
	float x3;
	float x4;
	float mean;
	float s;
	float a;
	float b;
	float c;
	float d;
	cout<<"Enter a set of four integer values"<<endl;
	cin>>x1>>x2>>x3>>x4;
	mean=(x1+x2+x3+x4)/4;
	a=pow(x1-mean,2);
	b=pow(x2-mean,2);
	c=pow(x3-mean,2);
	d=pow(x4-mean,2);
	s=sqrt((a+b+c+d)/4);
	cout<<"The mean is"<<mean<<endl;
	cout<<"The standard deviation is"<<s<<endl;
	return 0;
}
