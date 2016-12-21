#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float A,B,C,D,E,F;
	float G,H,I,J,K,L;
	float b,c,d,e,f,g;
	float h,i,j,k,l;
	float m;
	ofstream outfile;
	outfile.open("tempdata.dat");
	cin>>A>>B>>C>>D>>E>>F>>G>>H>>I>>J>>K>>L;
	m=(A+B+C+D+E+F+G+H+I+J+K+L)/12.0;
	b=B-A;
	c=C-B;
	d=D-C;
	e=E-D;
	f=F-E;
	g=G-F;
	h=H-G;
	i=I-H;
	j=J-I;
	k=K-J;
	l=L-K;
	outfile<<A<<endl;
	outfile<<B<<'\t'<<b<<endl;
	outfile<<C<<'\t'<<c<<endl;
	outfile<<D<<'\t'<<d<<endl;
	outfile<<E<<'\t'<<e<<endl;
	outfile<<F<<'\t'<<f<<endl;
	outfile<<G<<'\t'<<g<<endl;
	outfile<<H<<'\t'<<h<<endl;
	outfile<<I<<'\t'<<i<<endl;
	outfile<<J<<'\t'<<j<<endl;
	outfile<<K<<'\t'<<k<<endl;
	outfile<<L<<'\t'<<l<<endl;
	outfile<<m<<endl;
        outfile.close();
	return 0;
}

