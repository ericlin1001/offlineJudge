#include<fstream>
#include<iostream>

using namespace std;

float a,b,c,d,e,f,g,h,i,j,k,l;
float A,B,C,D,E,F,G,H,I,J,K,X;

int main()
{
	ofstream outfile;
	outfile.open("temp.txt");
	cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
	A=b-a;
	B=c-b;
	C=d-c;
	D=e-d;
	E=f-e;
	F=g-f;
	G=h-g;
	H=i-h;
	I=j-i;
	J=k-j;
	K=l-k;
	X=(a+b+c+d+e+f+g+h+i+j+k+l)/12;
	outfile<<a<<'\t'<<endl;
	outfile<<b<<'\t'<<A<<endl;
	outfile<<c<<'\t'<<B<<endl;
	outfile<<d<<'\t'<<C<<endl;
	outfile<<e<<'\t'<<D<<endl;
	outfile<<f<<'\t'<<E<<endl;
	outfile<<g<<'\t'<<F<<endl;
	outfile<<h<<'\t'<<G<<endl;
	outfile<<i<<'\t'<<H<<endl;
	outfile<<j<<'\t'<<I<<endl;
	outfile<<k<<'\t'<<J<<endl;
	outfile<<l<<'\t'<<K<<endl;
	cout<<X;
	outfile.close();
	return 0;
}
