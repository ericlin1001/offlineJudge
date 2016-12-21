#include<iostream>

#include<fstream>

using namespace std;

int main ()

{
	ifstream inFile;
	string a,b,c;
	inFile.open("problem3.txt");
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
