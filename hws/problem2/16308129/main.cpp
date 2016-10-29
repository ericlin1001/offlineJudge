#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,k,s;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	k=(a+b+c+d)/4.0;
	s=sqrt(((k-a)*(k-a)+(k-b)*(k-b)+(k-c)*(k-c)+(k-d)*(k-d))/4.0);
	cout<<k<<'\t'<<s<<endl;
	return 0;
}
