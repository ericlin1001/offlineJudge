#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,d;
float e,f,g,h,i,j,s;
cin>>a>>b>>c>>d;
e=(a+b+c+d)/4.0;
f=(a-e)*(a-e);
g=(b-e)*(b-e);
h=(c-e)*(c-e);
i=(d-e)*(d-e);
j=(f+g+h+i)/4.0;
s=sqrt(j);
cout<<e<<'\t'<<s<<endl;
return 0;
 } 
