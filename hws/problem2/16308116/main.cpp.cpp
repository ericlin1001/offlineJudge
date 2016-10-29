#include <iostream>
#include <math.h>
using namespace std;
int main ()
{int a,b,c,d;
cout<<"please enter four integer values :";
cin>>a>>b>>c>>d;
double e,f;
e=(a+b+c+d)/4.0;
f=sqrt((pow(a-e,2.0)+pow(b-e,2.0)+pow(c-e,2.0)+pow(d-e,2.0))/4.0);
cout<<"the mean of the four values is :"<<e<<endl;
cout<<"the standard deviation of the four values is :"<<f<<endl;
return 0;
 } 
