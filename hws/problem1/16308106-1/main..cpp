#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    float a;
    cout<<"please input the first temperature"<<endl;
    cin>>a;
    ofstream outfile;
    outfile.open("tempdate.dat");
    outfile<<a<<endl;
    int x;
    x=2;
    while(x<=12)
    { 
  
    cout<<"please input the number "<<x<<"temperature"<<endl;
    float b;
    cin>>b;
    cout<<"please input the number "<<x-1<<"temperature"<<endl;
    float c;
    cin>>c;
    float d;
    d=b-c;
    outfile.open("tempdate.dat");
    x=x+1;
}
system("pause");
return 0;
}
    
