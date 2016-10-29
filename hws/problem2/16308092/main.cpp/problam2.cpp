#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	float a,b,c,d,A,B;
	cin>>a>>b>>c>>d;
	A=(a+b+c+d)/4;
	B=sqrt(((a-A)*(a-A)+(b-A)*(b-A)+(c-A)*(c-A)+(d-A)*(d-A))/4);
	cout<<A<<" "<<B<<endl;
	return 0;
}
