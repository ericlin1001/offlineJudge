#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int i,j,k,a[10];
	double x,s=0,d=0;
	for(i=1;i<=4;i++){
		cin>>a[i];
		s=s+a[i];
	}
	s=s/4.0;
	cout<<"mean="<<s<<endl;
	for(i=1;i<=4;i++){
		d=d+(a[i]-s)*(a[i]-s);
	}
	d=d/4.0;
	d=sqrt(d);
	cout<<"standard deviation="<<d<<endl;
}
