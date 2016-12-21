#include<iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
 ifstream infile;
 string a,b,c,d;
 cout<<"Enter the input file name";
 getline(cin,d,'\n');
 infile.open(d.c_str());
 
 infile.ignore(200, ',');
 infile>>a;
 infile.ignore(200, ',');
 infile>>b;
 infile.ignore(200, ',');
 infile>>c;


 cout<<a<<"\n"<<b<<"\n"<<c<<endl;

infile.close();
return 0;
system("PAUSE");
} 



