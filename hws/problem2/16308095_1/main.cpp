#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float a,b,c,d,m,n;
	cin>>a>>b>>c>>d;
	m=(a+b+c+d)/4;
	n=sqrt((pow((a-m),2)+pow((b-m),2)+pow((c-m),2)+pow((d-m),2))/4);
	cout<<m<<'\t'<<n<<endl;
	return 0;
}
