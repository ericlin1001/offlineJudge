#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream inData;
	string a,b,c,fileName;
	cout<<"Enter the input filename:" ;
	cin>>fileName;
	inData.open(fileName.c_str());
	cin.ignore(200,',');
	inData>>a;
	cin.ignore(200,',');
	inData>>b;
	cin.ignore(200,',');
	inData>>c;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
 } 
