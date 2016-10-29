#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a1,a2,a3,a4;
	cin>>a1>>a2>>a3>>a4;
	float mean;
	mean=(a1+a2+a3+a4) /4.0;
	float sta;
	sta=sqrt((pow(a1-mean,2.0)+pow(a2-mean,2.0)+pow(a3-mean,2.0)+pow(a4-mean,2.0))/4.0);
	cout<<mean<<sta<<endl;
	return 0;
}
