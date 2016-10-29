#include<fstream>
#include<iostream>
#include<string>
using namespace std;
float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
float j;
float k;
float l;

int main()
{

ifstream inFile;
ofstream outFile;
outFile.open("tempdata.dat");

cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
cout<<a<<endl;
cout<<b<<"\t"<<b-a<<endl;
cout<<c<<"\t"<<c-b<<endl;
cout<<d<<"\t"<<d-c<<endl;
cout<<e<<"\t"<<e-d<<endl;
cout<<f<<"\t"<<f-e<<endl;
cout<<h<<"\t"<<h-f<<endl;
cout<<i<<"\t"<<i-h<<endl;
cout<<j<<"\t"<<j-i<<endl;
cout<<k<<"\t"<<k-j<<endl;
cout<<l<<"\t"<<l-k<<endl;
cout<<(a+b+c+d+e+f+g+h+i+j+k+l)/12.0<<endl;
outFile.close();
return 0;

}

