#include<iostream> 
#include<fstream> 
using namespace std;
int main()
{
	float t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12;
	ofstream outfile;
	outfile.open("tempdata.dat");
	cin>>t1>>t2>>t3>>t4>>t5>>t6>>t7>>t8>>t9>>t10>>t11>>t12;
	outfile<<t1<<endl;
	outfile<<t2<<'\t'<<t2-t1<<endl;
	outfile<<t3<<'\t'<<t3-t2<<endl;
	outfile<<t4<<'\t'<<t4-t3<<endl;
	outfile<<t5<<'\t'<<t5-t4<<endl;
	outfile<<t6<<'\t'<<t6-t5<<endl;
	outfile<<t7<<'\t'<<t7-t6<<endl;
	outfile<<t8<<'\t'<<t8-t7<<endl;
	outfile<<t9<<'\t'<<t9-t8<<endl;
	outfile<<t10<<'\t'<<t10-t9<<endl;
	outfile<<t11<<'\t'<<t11-t10<<endl;
	outfile<<t12<<'\t'<<t12-t11<<endl;
	outfile.close()£» 
	float ave;
	ave=(t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+t12)/12;
	cout<<ave<<endl;
	return 0;
}
