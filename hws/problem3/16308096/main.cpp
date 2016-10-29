#include<iostream>
#include<fstream>
#include<string>

using namespace std;

ifstream inFile;
string fileName;
string a, b, c;

int main()
{
	cout << "Enter the input file name: "<<endl;
	getline(cin,fileName,'\n'); 
	inFile.open(fileName.c_str());

	inFile.ignore(200, ',');
	inFile >> a;
	inFile.ignore(200, ',');
	inFile >> b;
	inFile.ignore(200, ',');
	inFile >> c;
	cout << "The first word following the first comma is " << a<<endl;
	cout << "The first word following the second comma is " << b<<endl;
	cout << "The first word following the third comma is " << c<<endl;
	inFile.close();
	return 0;
}
