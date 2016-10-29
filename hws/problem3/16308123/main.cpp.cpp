#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream indata;
    ofstream outdata;
    string filename,a,b,c;
    cin>>filename;
    indata.open(filename.c_str());
    indata.ignore(200,',');
    indata>>a;
    indata.ignore(200,',');
    indata>>b;
    indata.ignore(200,',');
    indata>>c;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
   
