#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
	int i,j,k,l;
	string st;
	char a[1000];
	scanf("%s",a);
	ifstream filein(a);
	ofstream fileout("out2.dat");
	filein>>st;
	while(!filein.eof()){
		l=st.length();
		if(i==3) break;
		if(st.substr(l-1,1)==","&&i<=3){
			filein>>st;
			if(st.substr(st.length()-1,1)==",")
			cout<<st.substr(0,st.length()-2)<<endl;
			else cout<<st<<endl;
			i++;
		}
		else filein>>st;
	}
	filein.close();
	fileout.close();
}
