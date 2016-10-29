#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,ave,f,s;
	cin>>a>>b>>c>>d;
	ave=(a+b+c+d)/4;
	f=pow(a-ave,2)+pow(b-ave,2)+pow(c-ave,2)+pow(d-ave,2);
	s=sqrt(f/4);
	cout<<ave<<"\t"<<s<<endl;
	
	return 0;
}    
