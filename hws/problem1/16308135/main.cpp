#include<iostream>
#include<fstream>
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
float m;
float n;
float o;
float p;
float q;
float r;
float s;
float t;
float u;
float v;
float w;

int main()
{
    ofstream outData;
    outData.open("tempdata.dat");
cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
m=-a+b;
n=-b+c;
o=-c+d;
p=-d+e;
q=-e+f;
r=-f+g;
s=-g+h;
t=-h+i;
u=-i+j;
v=-j+k;
w=-k+l;
outData<<a<<'\t'<<endl;
outData<<b<<'\t'<<m<<endl;
outData<<c<<'\t'<<n<<endl;
outData<<d<<'\t'<<o<<endl;
outData<<e<<'\t'<<p<<endl;
outData<<f<<'\t'<<q<<endl;
outData<<g<<'\t'<<r<<endl;
outData<<h<<'\t'<<s<<endl;
outData<<i<<'\t'<<t<<endl;
outData<<j<<'\t'<<u<<endl;
outData<<k<<'\t'<<v<<endl;
outData<<l<<'\t'<<w<<endl;
outData.close();

return 0; 
}                             
