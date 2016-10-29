#include<iostream>
#include<fstream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main(){ 
    int i;
	double last,now,sum; 
	ofstream fout("tempdata.dat");
	
	for (i=1;i<=12;i++){
		cin>>now;
		fout<<now;
		if (i==1) fout<<endl;else fout<<"\t"<<now-last<<endl;
		sum +=now;
		last=now;
	}
	cout<<sum/12.0<<endl;
	fout.close();
	return 0;
}
