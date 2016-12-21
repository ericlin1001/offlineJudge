#include<fstream>
#include<iostream>
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
float x;


int main()
{ ofstream outfile;
  outfile.open("tempdata.dat");
  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
  m=b-a;
  n=c-b;
  o=d-c;
  p=e-d;
  q=f-e;
  r=g-f;
  s=h-g;
  t=i-h;
  u=j-i;
  v=k-j;
  w=l-k;
  x=(a+b+c+d+e+f+g+h+i+j+k+l)/12;
  
  outfile<<a<<" "<<" "<<endl;
  outfile<<b<<" "<<m<<endl;
  outfile<<c<<" "<<n<<endl;
  outfile<<d<<" "<<o<<endl;
  outfile<<e<<" "<<p<<endl;
  outfile<<f<<" "<<q<<endl;
  outfile<<g<<" "<<r<<endl;
  outfile<<h<<" "<<s<<endl;
  outfile<<i<<" "<<t<<endl;
  outfile<<j<<" "<<u<<endl;
  outfile<<k<<" "<<v<<endl;
  outfile<<l<<" "<<w<<endl;
  outfile<<"average="<<x<<endl;
  
  return 0;
}
