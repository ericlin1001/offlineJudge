#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d;
    float g,h,i,j,k;
    cin>>a>>b>>c>>d;
    g=(a+b+c+d)/4.0;
    h=pow((a-g),2)+pow((b-g),2)+pow((c-g),2)+pow((d-g),2);
    i=h/4.0;
    j=sqrt(i);
    cout<<g<<'\t'<<j<<endl;
	return 0;
}

