#include<iostream>
#include<string>
#include<fstream> 
using namespace std;


int main()
{
	string a,b,c,x;
	ifstream indata;
	cout<<"Enter the input file name: "<<endl;
	indata.open("q3.txt");

	indata.ignore(200,',');
	indata>>a; 
	indata.ignore(200,',');
	indata>>b;
	indata.ignore(200,',');
	indata>>c;
	cout<<a<<endl<<b<<endl<<c<<endl;
	
	indata.close() ;
	return 0;
	
}
