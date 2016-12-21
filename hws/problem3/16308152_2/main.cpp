#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string filename;
	
	ifstream inFile;
	cout<<"Enter the input file name: ";
	cin>>filename;
	inFile.open(filename.c_str());
	if(!inFile.is_open())
	{
		cout<<"文件打开失败！\n"; 
		return -1; 
	}
	
	char ch;
	int count=0;
	inFile.ignore(200,',');
	inFile.get();
	
	while(count<3)
	{
	     while(inFile>>ch)
	    {
	    	if(ch==','|| ch==' ' || ch=='.')
	    	    break;
	    	cout<<ch;
      	}
      	cout<<endl;
      	count++;
    }
	inFile.close();
	return 0;
}
