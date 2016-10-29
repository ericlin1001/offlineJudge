#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	int i,j,k,n;
	double a[13],s=0;
	for(i=1;i<=12;i++){
		cin>>a[i];
	    s=s+a[i];
	}
	s=s/12.0;
	ofstream fout;
	fout.open("tempdata.dat");
	fout<<a[1]<<endl;
	for(i=2;i<=12;i++){
		fout<<a[i]<<'\t'<<a[i]-a[i-1]<<endl;
	}
	cout<<s;
	fout.close();
}
