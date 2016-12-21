#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream outdata;
	float a,b,c,d,e,f,g,h,i,j,k,l;
	float ab,bc,cd,de,ef,fg,gh,hi,ij,jk,kl;
	float average;
	
	outdata.open("tempdata.dat");
	
	cin>>a>>b>>c>>d>>e>>f;
	cin>>g>>h>>i>>j>>k>>l;
	ab=b-a;
	bc=c-b;
	cd=d-c;
	de=e-d;
	ef=f-e;
	fg=g-f;
	gh=h-g;
	hi=i-h;
	ij=j-i;
	jk=k-j;
	kl=l-k;
	average=(a+b+c+d+e+f+g+h+i+j+k+l)/12.0;
	
	cout<<average<<endl;
	
	outdata<<a<<endl<<b<<"\t"<<ab<<endl;
	outdata<<c<<"\t"<<bc<<endl;
	outdata<<d<<"\t"<<cd<<endl;
	outdata<<e<<"\t"<<de<<endl;
	outdata<<f<<"\t"<<ef<<endl;
	outdata<<g<<"\t"<<fg<<endl;
	outdata<<h<<"\t"<<gh<<endl;
	outdata<<i<<"\t"<<hi<<endl;
	outdata<<j<<"\t"<<ij<<endl;
	outdata<<k<<"\t"<<jk<<endl;
	outdata<<l<<"\t"<<kl<<endl;
	
	outdata.close();
	return 0;

}
