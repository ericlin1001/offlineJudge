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
	filein>>st;
	while(!filein.eof()){
		l=st.length();
		if(i==3) break;
		if(st.substr(l-1,1)==","&&i<=3){
			filein>>st;
			cout<<st<<endl;
			i++;
		}
		else filein>>st;
	}
	filein.close(); 
}
