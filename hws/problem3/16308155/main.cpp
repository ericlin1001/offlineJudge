#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstring>
#include<string>
using namespace std;

int main(){
	string s;
	int t;
	cin>>s;
	ifstream fin(s.c_str());
	
	while (t<3){
	  fin.ignore(200,',');
	  fin.ignore(200,' ');
	  fin>>s;
	  cout<<s;
	  t++;
	}
	fin.close();
   return 0;
}
