#include<fstream>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float a;
float b;
float c;
float d;
float x;
float y;
float z;
float t;
int main()
{
cin>>a>>b>>c>>d;
x=(a+b+c+d)/4.0;
y=(a-x)*(a-x)+(b-x)*(b-x)+(c-x)*(c-x)+(d-x)*(d-x);
z=y/4.0; 
t=sqrt(z);
cout<<t<<endl;
return 0;
}

