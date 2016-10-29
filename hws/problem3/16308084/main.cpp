#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string a,b,c;
	ifstream inData;
	string fileName;
	
	cout<<"Please enter your filename! /n";
	cin>>fileName;
	
	  inData.open(fileName.c_str());
	  inData.ignore(200,',');
	  inData>>a;
	  inData.ignore(200,',');
	  inData>>b;
	  inData.ignore(200,',');
	  inData>>c;
	  
	cout<<a<<endl<<b<<endl<<c<<endl;
	
    return 0;
}
