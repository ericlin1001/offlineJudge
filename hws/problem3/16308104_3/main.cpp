#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string a,b,c,filename;
	ifstream infile;
	
	cout<<"Enter the input file name";
	getline(cin,filename,'\n');
	infile.open(filename.c_str());

	infile.ignore(200,',');
	infile>>a;
	infile.ignore(200,',');
	infile>>b;
	infile.ignore(200,',');
	infile>>c;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	infile.close();
	return 0;
} 
