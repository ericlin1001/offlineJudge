#include<iostream>
#include<string> 
#include<fstream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	string name;
	string passage;
	ifstream inData;
	cin>>name;
	inData.open(name.c_str());
    getline(inData,passage); 
	string First; 
	string Firstword;
	string Second;
	string Secondword;
	string Third;
	string Thirdword;
	a=passage.find(",");
	First=passage.substr(a+2,200);
    b=First.find(" ");
    Firstword=First.substr(0,b);
    c=First.find(",");
    Second=First.substr(c+2,200);
    d=Second.find(" ");
    Secondword=Second.substr(0,d);
    e=Second.find(",");
    Third=Second.substr(e+2,200);
    f=Third.find(" ");
    Thirdword=Third.substr(0,f);
    cout<<Firstword<<endl<<Secondword<<endl<<Thirdword<<endl;
    inData.close();
    return 0;
}
    


