#include<iostream>
#include<cmath>
 using namespace std;
 float p(float n)
 {
 return n*n;
}
       
int main()
{
int a,b,c,d;
float e,f;
cin>>a>>b>>c>>d;
e=(a+b+c+d)/4;
f=sqrt((p(a-e)+p(b-e)+p(c-e)+p(d-e))/4.0);
cout<<d<<'\t'<<e<<endl;
return 0;
}
