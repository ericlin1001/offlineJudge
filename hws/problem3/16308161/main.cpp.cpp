#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
   ifstream indate;
   indate.open("loan.in");
   string a,b,c;
   cin.ignore(200,',');
   cin>>a;
   cin.ignore(200,',');
   cin>>b;
   cin.ignore(200,',');
   cin>>c;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
   return 0;
}
   
