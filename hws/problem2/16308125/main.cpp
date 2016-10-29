#include<iostream>
#include<cmath>

using namespace std;

int a,b,c,d;
float s,ave,e,f;

int main()
{
	cin>>a>>b>>c>>d; 
    ave=(a+b+c+d)/4.0;
    e=(a-ave)*(a-ave)+(b-ave)*(b-ave)+(c-ave)*(c-ave)+(d-ave)*(d-ave);
    f=e/4.0;
    s=pow(f,0.5);
    cout<<s<<endl;
    return 0;	
} 
