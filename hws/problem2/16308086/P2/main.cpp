#include<iostream>
#include<cmath>
using namespace std;
float f(float n);
int main()
{
    int a,b,c,d;
    float m,s,p;
    cin>>a>>b>>c>>d;
    m=(a+b+c+d)/4;
    p=f(a-m)+f(b-m)+f(c-m)+f(d-m);
    s=sqrt(p/4);
    cout<<m<<"\t"<<s<<endl;
    return 0;
}
float f(float n)
{
    return n*n;
}
