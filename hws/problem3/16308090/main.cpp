#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

string a;
string b;
string c;

int main()
{
	ifstream inFile;
	string fileName;
	cin>>fileName;
	inFile.open(fileName.c_str());
	
	inFile.ignore(200,',');
	inFile>>a;
	inFile.ignore(200,',');
	inFile>>b;
	inFile.ignore(200,',');
	inFile>>c;
	
	cout<<a<<endl<<b<<endl<<c<<endl;
	
	return 0;
}
