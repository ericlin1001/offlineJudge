#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"please input four integers"<<endl;
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	float e;
	e=(a+b+c+d)/4;
	float f;
	f=sqrt((pow(a-e,2)+pow(b-e,2)+pow(c-e,2)+pow(d-e,2))/3);
	cout<<"the mean is "<<e<<" and the standard deviation is "<<f<<endl;
	system("pause");
	return 0;
}
