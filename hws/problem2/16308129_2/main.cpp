#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,d;
	float k,s;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	k=(a+b+c+d)/4.0;
	s=sqrt(((k-a)*(k-a)+(k-b)*(k-b)+(k-c)*(k-c)+(k-d)*(k-d))/4.0);
	cout<<k<<'\t'<<s<<endl;
	return 0;
}
