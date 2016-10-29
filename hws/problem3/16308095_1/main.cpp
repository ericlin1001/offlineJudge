#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	cout<<"Enter the input file name:"<<endl;
	string a,b,c;
	ifstream inFile;
	string filename;
	cin>>filename;
	inFile.open(filename.c_str());
	inFile.ignore(200,',');
	inFile>>a;
	inFile.ignore(200,',');
    inFile>>b;
	inFile.ignore(200,',');
	inFile>>c;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	inFile.close();
	return 0; 
}
