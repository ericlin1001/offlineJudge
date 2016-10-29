#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float mean,standard_deviation;
	float sum1=0.0;
	float sum2=0.0;
	int num[4];
	
	for(int i=0;i<4;i++)
	{
		cin>>num[i];
		sum1+=num[i];
	}
	
	mean=sum1/4.0;
	for(int i=0;i<4;i++)
		sum2+=(num[i]-mean)*(num[i]-mean);
	standard_deviation=sqrt(sum2/4);
	
    cout<<mean<<"\t"<<standard_deviation;
    return 0;
}
