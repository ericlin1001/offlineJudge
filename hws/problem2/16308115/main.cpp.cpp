#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d;
	float x,s;
	cin>>a>>b>>c>>d;
	x=(a+b+c+d)/4;
	s=sqrt((pow(a-x,2)+pow(b-x,2)+pow(c-x,2)+pow(d-x,2))/4);
	cout<<"the main is"<<x<<endl;
	cout<<"the standard deviation is"<<s<<endl;
	return 0;
 } 
