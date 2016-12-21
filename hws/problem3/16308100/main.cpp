#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string filename;
    ifstream infile;
	ofstream outfile;
	cout<<"Enter the input file name£º";
	cin>>filename;
	infile.open(filename.c_str());
	string a,b,c;
	infile.ignore(200,',');
	infile>>a;
	infile.ignore(200,',');
	infile>>b;
	infile.ignore(200,',');
	infile>>c;
	cout<<a<<endl<<b<<endl<<c;
	infile.close();
	return 0; 
	
}
