#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char fileName[40];
	ifstream inFile;
	cout<<"输入文件名称: ";
	cin.getline(fileName,40);
	inFile.open(fileName);
	if(!inFile.is_open())
	{
		cout<<"无法找到文件："<<fileName<<endl;
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
