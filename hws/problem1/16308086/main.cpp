#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    float a,s,d,f,g,h,j,k,l,z,x,c;
    cin>>a>>s>>d>>f>>g>>h>>j>>k>>l>>z>>x>>c;
    ofstream tem;
    tem.open("tempdata.dat");
    tem<<a<<endl;
    tem<<s<<"\t"<<s-a<<endl;
    tem<<d<<"\t"<<d-s<<endl;
    tem<<f<<"\t"<<f-d<<endl;
    tem<<g<<"\t"<<g-f<<endl;
    tem<<h<<"\t"<<h-g<<endl;
    tem<<j<<"\t"<<j-h<<endl;
    tem<<k<<"\t"<<k-j<<endl;
    tem<<l<<"\t"<<l-k<<endl;
    tem<<z<<"\t"<<z-l<<endl;
    tem<<x<<"\t"<<x-z<<endl;
    tem<<c<<"\t"<<c-x<<endl;
    tem.close();
    return 0;
}
