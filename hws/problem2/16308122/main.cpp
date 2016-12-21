#include<iostream>
#include<math.h>
using namespace std;
int a;
int b;
int c;
int d;
int sum;
int fangcha;
int main()
{
    cin>>a>>b>>c>>d;
    sum = (a+b+c+d)/4.0;
	fangcha =(a-sum)*(a-sum)+(b-sum)*(b-sum)+(c-sum)*(c-sum)+(d-sum)*(d-sum);
    fangcha =sqrt(fangcha);
    cout<<sum<<'\t'<<fangcha;
    
    
return 0;
    }
