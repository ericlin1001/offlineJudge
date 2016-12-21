#include<iostream> 
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream inFile;
	string  fileName,a,b,c;
	
	cout<<"Enter the input fileName:";
	getline(cin,fileName);
	cin>>fileName;
	inFile.open(fileName.c_str());
	
	inFile.ignore(200,','),
	inFile>>a;
	inFile.ignore(200,','),
	inFile>>b;
	inFile.ignore(200,','),
	inFile>>c;
	
	cout<<a<<endl
	    <<b<<endl
	    <<c<<endl;
	    
	inFile.close();
	return 0;	
}
