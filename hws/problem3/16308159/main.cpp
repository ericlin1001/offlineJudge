#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
	ifstream inData;
	inData.open("input");
	string a,b,c;
	inData>>cin.ignore(200,',')>>a>>cin.ignore(200,',')>>b>>cin.ignore(200,',')>>c;
	cout<<a<<b<<c;
	return 0;	
}
