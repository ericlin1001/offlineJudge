#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char filename[400];
	
	ifstream inFile;
	cout<<"Enter the input file name: ";
	cin.getline(filename,400);
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
	    inFile.ignore(1,' ');
	    inFile>>word;
	    cout<<word<<endl;
	    count++;
	}
	inFile.close();
	return 0;
}
