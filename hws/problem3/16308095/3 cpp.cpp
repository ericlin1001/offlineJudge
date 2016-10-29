#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
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
	cout<<a<<'\t'<<b<<'\t'<<c<<endl;
	inFile.close();
	system("pause");
	return 0; 
}
