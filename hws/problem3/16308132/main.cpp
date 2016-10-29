#include<iostream> 
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string a,b,c;
	ifstream inFile;
	string filename;
	cout<<"Enter the input file name:";
	getline(cin,filename,'\n');
	inFile.open(filename.c_str());
	inFile.ignore(200,',');
	inFile>>a;
	inFile.ignore(200,',');
	inFile>>b;
	inFile.ignore(200,',');
	inFile>>c;
	cout<<a<<endl<<b<<endl<<c<<endl;
	inFile.close();
	return 0;
}
