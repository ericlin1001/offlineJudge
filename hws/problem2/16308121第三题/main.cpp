#include<iostream>
#include<math.h>
using namespace std;
int a;
int b;
int c;
int d;
int sum;
int fang;
int main()
{
    cin>>a>>b>>c>>d;
    sum = (a+b+c+d)/4.0;
	fang =(a-sum)*(a-sum)+(b-sum)*(b-sum)+(c-sum)*(c-sum)+(d-sum)*(d-sum);
    fang =sqrt(fang);
    cout<<sum<<'\t'<<fang;
return 0;
    }
