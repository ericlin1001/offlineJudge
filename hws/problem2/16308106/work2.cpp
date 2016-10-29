#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,d,e,s,m;
	
	cin>>a>>b>>c>>d;
	
	m=(a+b+c+d)/4;
	e=pow(a-m,2)+pow(b-m,2)+pow(c-m,2)+pow(d-m,2);
	s=sqrt(e/4);
	cout<<s<<endl;
	return 0;
	
}

            
            
            
 
