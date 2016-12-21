#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{cout<<"please input the file's name"<<endl;
ifstream infile;
string filename;
cin>>filename;

infile.open(filename.c_str());
 char a=',';
 char b=' ';
 int i=0;
while(i<=3)
{
char ch[200];
infile.ignore(200,a);
infile.get(ch,200,b);
cout<<ch<<endl;
i=i+1;
}

system("pause");
return 0;
 } 
