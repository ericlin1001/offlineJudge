#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	float mean,sd;
	
	cin>>a>>b>>c>>d;
	
    mean=(a+b+c+d)/4.0;
    sd=sqrt(((a-mean)*(a-mean)+(b-mean)*(b-mean)+(c-mean)*(c-mean)+(d-mean)*(d-mean))/4.0);
	cout<<mean<<'\t'<<sd<<endl;
	        
	
	return 0;
}
