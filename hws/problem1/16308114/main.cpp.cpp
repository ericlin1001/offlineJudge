#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float a;float b;float c;float d;float e;float f;float g;float h;float i;float j;float k;float l;
	float A;float B;float C;float D;float E;float F;float G;float H;float I;float J;float K;float q;
	ofstream outFile;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	outFile.open("tempdata.dat");
	A=b-a;B=c-b;C=d-c;D=e-d;E=f-e;F=g-f;G=h-g;H=i-h;I=j-i;J=k-j;
	q=(a+b+c+d+e+f+g+h+i+j+k+l)/12.0;
	outFile<<a<<"\n"<<b<<"\t"<<A<<"\n"<<c<<"\t"<<B<<"\n"<<d<<"\t"<<C<<"\n"<<e<<"\t"<<D<<"\n"<<f<<"\t"<<E<<"\n"<<g<<"\t"<<F<<"\n"<<h<<"\t"<<G<<"\n"<<i<<"\t"<<H<<"\n"<<j<<"\t"<<I<<"\n"<<k<<"\t"<<J<<"\n"<<l<<"\t"<<K<<endl;
	
	outFile<<q<<endl;
	return 0;
}
