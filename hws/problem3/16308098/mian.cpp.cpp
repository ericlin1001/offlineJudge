#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string a;
string b;
string c;
string fileName;
ifstream inFile;
int main()
{
	cout<<"Enter the input file name.";
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


            
            
            
 
