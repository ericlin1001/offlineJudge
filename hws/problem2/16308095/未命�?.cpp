#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a,b,c,d,m,n,X,Y,Z,W,T;
	cin>>a>>b>>c>>d;
	m=(a+b+c+d)/4;
	X=pow((a-m),2);
	Y=pow((b-m),2);
	Z=pow((c-m),2);
	W=pow((d-m),2);
	n=sqrt((X+Y+Z+W)/4.0);
	cout<<m<<'\t'<<n<<endl;
	return 0;
}
