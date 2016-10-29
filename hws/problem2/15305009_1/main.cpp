#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x1,x2,x3,x4;
	float mean,deviation;
	cin>>x1>>x2>>x3>>x4;
	mean=(x1+x2+x3+x4)/4;
	deviation=sqrt((pow((x1-mean),2)+pow((x2-mean),2)+pow((x3-mean),2)+pow((x4-mean),2))/3);
	cout<<mean<<'\t'<<deviation<<endl;
	return 0;
}
