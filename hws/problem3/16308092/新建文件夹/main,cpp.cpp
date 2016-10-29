#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream indata;
	string filename;
	string A,B,C;
    cin>>filename;
    indata.open(filename.c_str());
    indata.ignore(200,',');
    indata>>A;
    indata.ignore(200,',');
    indata>>B;
    indata.ignore(200,',');
    indata>>C;
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    indata.close();
    return 0;
}
