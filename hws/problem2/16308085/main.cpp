#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	float mean,sd;
	
	
	cout<<"Please enter 4 integer values."<<endl;
	cin>>a>>b>>c>>d;
	
    mean=(a+b+c+d)/4.0;
    sd=sqrt((a-mean)*(a-mean)+(b-mean)*(b-mean)+(c-mean)*(c-mean)+(d-mean)*(d-mean));
	cout<<"The mean is:"<<mean<<endl;
	cout<<"The standard deviation is:"<<sd<<endl;
	        
	
	return 0;
	        
	
}
