#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream read;
	string filename;
	string a,b,c;
	cin>>filename;
	read.open(filename.c_str());
    read.ignore(200,',');
    read>>a;
    cout<<a<<endl;
    read.ignore(200,',');
    read>>b;
    cout<<b<<endl;
    read.ignore(200,',');
    read>>c;
    cout<<c<<endl;
    read.close();
    return 0;
}
