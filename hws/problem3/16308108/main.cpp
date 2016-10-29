

#include<iostream> 
#include<fstream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	ifstream  inFile;
	string    a,b,c,filename;
	
	cout<<"Enter the input file name:";
	getline(cin,filename,'\n');
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