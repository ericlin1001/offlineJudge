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
    cin>>str1;
    cin.ignore(1000,',');
    cin>>str2;
    cin.ignore(1000,',');
    cin>>str3;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
	return 0;	
}
