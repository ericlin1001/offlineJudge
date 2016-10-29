


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;   //four integer values
	float sta,mean;        //standard deviation and average
	float e,f,g,h;
	cin>>a,b,c,d;
	mean=(a+b+c+d)/4.0;
	e=pow(a-mean,2.0);
	f=pow(b-mean,2.0);
	g=pow(c-mean,2.0);
	h=pow(d-mean,2.0);
	sta=(e+f+g+h)/4.0;
	sta=pow(sta,0.5);
	cout<<"The mean is "<<mean<<"."<<endl;
	cout<<"The standard deviation is "<<sta<<"."<<endl;
	return 0;	
}