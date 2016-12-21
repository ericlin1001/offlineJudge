#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,mean,StandardDeviation;
	cin>>a>>b>>c>>d;
	mean=(a+b+c+d)/4;
	StandardDeviation=pow((pow(a-mean,2.0)+pow(b-mean,2.0)+pow(c-mean,2.0)+pow(d-mean,2.0))/4,0.5);
	cout<<mean<<'\t'<<StandardDeviation<<endl;
	return 0;
}
