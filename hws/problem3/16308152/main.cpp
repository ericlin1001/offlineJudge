#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char filename[40];
	
	ifstream inFile;
	cout<<"Enter the name of input file: ";
	cin.getline(filename,40);
	inFile.open(filename);
	if(!inFile.is_open())
	{
		cout<<"Can not find the file "<<filename<<endl;
		cout<<"Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	
	string word;
	int count=0;
	
	while(count<3)
	{
	    inFile.ignore(200,',');
	    inFile.ignore(2,' ');
	    inFile>>word;
	    cout<<word<<endl;
	    count++;
	}
	return 0;
}
