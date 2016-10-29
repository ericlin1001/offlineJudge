#include<iostream>
#include<fstream>
using namespace std;
 int main()
 { float a,b,c,d,e,f,g,h,i,j,k,l,A;
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
 ofstream abc;
 abc.open("tem.dat");
 abc<<a<<endl;
 abc<<b<<"/t"<<b-a<<endl;
 abc<<c<<"/t"<<c-b<<endl;
 abc<<d<<"/t"<<d-c<<endl;
 abc<<e<<"/t"<<e-d<<endl;
 abc<<f<<"/t"<<f-e<<endl;
 abc<<g<<"/t"<<g-f<<endl;
 abc<<h<<"/t"<<h-g<<endl;
 abc<<i<<"/t"<<i-h<<endl;
 abc<<j<<"/t"<<j-i<<endl; 
 abc<<k<<"/t"<<k-j<<endl;
 abc<<l<<"/t"<<l-k<<endl;
 
 A=(a+b+c+d+e+f+g+h+i+j+k+l)/12;
 cout<<A<<endl;
 abc.close();
 return 0;
 }
