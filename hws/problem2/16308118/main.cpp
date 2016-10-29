#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2,x3,x4,x,s;
	cin>>x1>>x2>>x3>>x4;
	x=(x1+x2+x3+x4)/4;
	s=sqrt((pow(x1-x,2)+pow(x2-x,2)+pow(x3-x,2)+pow(x4-x,2))/4);
	cout<<x<<"\t"<<s<<endl;
	return 0;
}
