#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c,d;
	float x,y,deviation;
	cin>>a>>b>>c>>d;
	
	x=float(a+b+c+d)/4.0;
	
	y=pow(a-x,2)+pow(b-x,2)+pow(c-x,2)+pow(d-x,2);
	deviation=sqrt(y/4.0);
	
	cout<<x<<"\t"<<deviation<<endl;
	return 0; 
	
	
 } 
