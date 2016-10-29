#include<iostream>
#include<fstream>
using namespace std;
int main()
{float a[12]={34.5,38.6,42.4,46.8,51.3,63.1,60.2,55.9,60.3,56.7,50.3,42.2},b[11];
for(int i=0;i<11;i++)
b[i]=a[i+1]-a[i];
float c=0.0,d;
for(int i=0;i<12;i++)
c=c+a[i];
d=c/12.0;
ofstream outfile;
outfile.open("tempdata.dat");
outfile<<a[0]<<endl;
for(int i=0;i<11;i++)
outfile<<a[i+1]<<'\t'<<b[i]<<endl;
outfile.close();
cout<<d<<endl;
return 0;
}
