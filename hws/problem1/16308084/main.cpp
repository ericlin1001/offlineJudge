#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ofstream outdata;
	outdata.open("tempdata.dat");
	
	float t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12;
    float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	cin>>t1>>t2>>t3>>t4>>t5>>t6>>t7>>t8>>t9>>t10>>t11>>t12;
	a1=t2-t1;a2=t3-t2;a3=t4-t3;a4=t5-t4;a5=t6-t5;a6=t7-t6;a7=t8-t7;a8=t9-t8;a9=t10-t9;a10=t11-t10;a11=t12-t11;
	
	outdata <<t1<<endl<<t2 <<" "<<a1<<endl<<t3 <<" "<<a2<<endl<<t4 <<" "<<a3<<endl<<t5 <<" "<<a4<<endl<<t6 <<" "<<a5<<endl<<t7 <<" "<<a6<<endl<<t8 <<" "<<a7<<endl<<t9 <<" "<<a8<<endl<<t10 <<" "<<a9<<endl<<t11 <<" "<<a10<<endl<<t12 <<" "<<a11<<endl;
	
	outdata.close();
	return 0;
		
}
