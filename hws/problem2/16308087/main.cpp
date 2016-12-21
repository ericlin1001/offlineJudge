#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d;
	float s,e,f,h,i,j;
	cin>>a>>b>>c>>d;
	e=(a+b+c+d)/4.0;
	f=a-e;
	h=b-e;
	i=c-e;
	j=d-e;
	f=pow(f,2);
	h=pow(h,2);
	i=pow(i,2);
	j=pow(j,2);
	s=h+i+j+f;
	s=pow((s/3.0),1/2);
	cout<<e<<" "<<s;
	return 0;
	
 } 
