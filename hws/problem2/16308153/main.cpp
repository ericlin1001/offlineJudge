#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float e,f;
    e=(a+b+c+d)/4.0;//平均数 
    f=(a-e)*(a-e)+(b-e)*(b-e)+(c-e)*(c-e)+(d-e)*(d-e);
    f=f/4.0;//方差 
    float g;
    g=sqrt(f);//标准差 
    cout<<e<<"\t"<<g<<endl;
    return 0;
}
