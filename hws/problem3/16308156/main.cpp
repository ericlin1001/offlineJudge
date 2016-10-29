#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream inFile;
	string fileName;
	string str1;
	string str2;
	string str3;
	cout<<"Enter the input file name"<<endl;
	getline(cin,fileName);
	inFile.open(fileName.c_str());
    cin.ignore(1000,',');
    cin.get();
    cin.ignore(1000,',');
    cin.get();
    cin.ignore(1000,',');
	return 0;	
}
