#include<iostream>
#include<fstream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(){
	double a[3];
	double sum,ave,sta;
	int i;
	for (i=0;i<4;i++) {
		cin>>a[i];
		sum+=a[i];
	}
	ave=sum/4.0;
	sum=0;
	for (i=0;i<4;i++){
	  sum+=(a[i]-ave)*(a[i]-ave);	
	}
	sta=sqrt(sum/4.0);
	cout<<ave<<"\t"<<sta<<endl;
	return 0;
}

