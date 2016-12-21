#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;//输入四个整数
	double e,f,g,h,i,j,k;//把e作为平均数 
	cin>>a>>b>>c>>d;
	e=(a+b+c+d)/4.0;
	h=a-e;
	i=b-e;
	j=c-e;
	k=d-e;
	f=pow(h,2.0)+pow(i,2.0)+pow(j,2.0)+pow(k,2.0);
	g=f/3;
	cout<<sqrt(g)<<endl;
	return 0;
 }  
