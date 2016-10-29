#include<iostream>
#include<fstream>

using namespace std;
string a,b,c;

ifstream infile;

int main()
{
	infile.open("ip.dat",ios::in);
	cin.ignore(200,',');
	cin>>a;
	cin.ignore(200,',');
	cin>>b;
	cin.ignore(200,',');
	cin>>c;
	cout<<"a"<<endl;
	cout<<"b"<<endl;
	cout<<"c"<<endl;
	
}
