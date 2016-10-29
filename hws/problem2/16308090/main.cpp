#include<iostream>
#include<cmath>
using namespace std;

int a,b,c,d;
float A,B;

int main()
{
	cin>>a>>b>>c>>d;
	A=(a+b+c+d)/4;
	B=sqrt(((a-A)*(a-A)+(b-A)*(b-A)+(c-A)*(c-A)+(d-A)*(d-A))/4);
	
	cout<<A<<"\t"<<B<<endl;
	return 0;
}
