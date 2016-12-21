#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1;int x2;int x3;int x4;
	float x;float m;float s;
	cin>>x1>>x2>>x3>>x4;
	x=(x1+x2+x3+x4)/4.0;
	m=pow(x1-x,2)+pow(x2-x,2)+pow(x3-x,2)+pow(x4-x,2);
	s=pow(m/4.0,1/2.0);
	cout<<"平均数为"<<x<<",方差为"<<s<<endl;
	return 0; 
}
