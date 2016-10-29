#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	int i,j,k,n;
	double a[13];
	for(i=1;i<=12;i++){
		cin>>a[i];
	}
	ofstream fout;
	fout.open("tempdata.dat");
	fout<<a[1]<<endl;
	for(i=2;i<=12;i++){
		fout<<a[i]<<'\t'<<a[i]-a[i-1]<<endl;
	}
	fout.close();
}
