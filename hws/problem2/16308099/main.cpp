#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int sum=a+b+c+d;
	double i=sum/4.0;
	double m=(pow(a-i,2)+pow(b-i,2)+pow(c-i,2)+pow(d-i,2))/4.0;
	double end=sqrt(m);
	cout<<end<<endl;
	return 0;
}
