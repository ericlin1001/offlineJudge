#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	float mean,s;
	cin>>a>>b>>c>>d;
	mean=(a+b+c+d)/4.0;
	s=sqrt((pow(a-mean,2)+pow(b-mean,2)+pow(c-mean,2)+pow(d-mean,2))/4.0);
	cout<<mean<<"\t"<<s<<endl;
	return 0; 
} 
