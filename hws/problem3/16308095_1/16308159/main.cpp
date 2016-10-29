
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
    ifstream inData;
    string a,b,c;
    inData.open("input");
    
    inData.ignore(200,',');
    inData>>a;
    inData.ignore(200,',');
    inData>>b;
    inData.ignore(200,',');
    inData>>c;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
    inData.close();
    return 0;
}
