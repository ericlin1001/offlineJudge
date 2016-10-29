#include<iostream>
#include<fstream>
using namespace std;
ofstream outFile;
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

float function(float a, float b)
{
      return b-a;
}
int main()
{
    outFile.open("result.dat");
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
    outFile<<a<<endl;
    outFile<<b<<'\t'<<function(a,b)<<endl;
    outFile<<c<<'\t'<<function(b,c)<<endl;
    outFile<<d<<'\t'<<function(c,d)<<endl;
    outFile<<e<<'\t'<<function(d,e)<<endl;
    outFile<<f<<'\t'<<function(e,f)<<endl;
    outFile<<g<<'\t'<<function(f,g)<<endl;
    outFile<<h<<'\t'<<function(g,h)<<endl;
    outFile<<i<<'\t'<<function(h,i)<<endl;
    outFile<<j<<'\t'<<function(i,j)<<endl;
    outFile<<k<<'\t'<<function(j,k)<<endl;
    outFile<<l<<'\t'<<function(k,l)<<endl;
    outFile.close();
    float ave;
    ave=(a+b+c+d+e+f+g+h+i+j+k+l)/12;
    cout<<ave<<endl;
}

    


