#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,x3,x4;
	cin>>x1,x2,x3,x4;
	float mean,a;
	double s;
	mean=(x1+x2+x3+x4)/4;
	a=mean;
	s=sqrt((pow(x1-a,2)+pow(x2-a,2)+pow(x3-a,2)+pow(x4-a,2))/4);
	cout<<"mean="<<mean<<'\t'<<"s="<<s<<endl;
	return 0;
}

