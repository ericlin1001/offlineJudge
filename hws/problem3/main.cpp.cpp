#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream infile;
	string a,b,c,filename;
	cout<<"enter the input file name";
	cin>>filename;
	getline(cin,filename);
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
 
