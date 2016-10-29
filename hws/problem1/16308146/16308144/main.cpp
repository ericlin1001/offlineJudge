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
	outfile<<B<<" "<<b<<endl;
	outfile<<C<<" "<<c<<endl;
	outfile<<D<<" "<<d<<endl;
	outfile<<E<<" "<<e<<endl;
	outfile<<F<<" "<<f<<endl;
	outfile<<G<<" "<<g<<endl;
	outfile<<H<<" "<<h<<endl;
	outfile<<I<<" "<<i<<endl;
	outfile<<J<<" "<<j<<endl;
	outfile<<K<<" "<<k<<endl;
	outfile<<L<<" "<<l<<endl;
	outfile<<m<<endl;
	return 0;
}
