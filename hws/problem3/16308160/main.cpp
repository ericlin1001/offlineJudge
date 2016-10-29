#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("input");
	string a,b,c;
	inFile>>cin.ignore(200,',')
	>>a
	>>cin.ignore(200,',')
	>>b
	>>cin.ignore(200,',')
	>>c;
	cout<<a<<endl<<b<<endl<<c<<endl;
	
	return 0;
}
