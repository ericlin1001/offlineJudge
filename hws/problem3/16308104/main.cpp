#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string a,b,c;
	ifstream indata;
	indata.open("input.txt");
	indata.ignore(200,',');
	indata>>a;
	indata.ignore(200,',');
	indata>>b;
	indata.ignore(200,',');
	indata>>c;
	cout<<a<<endl<<b<<endl<<c<<endl;
	indata.close();
	return 0;
} 
