#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inData;
	int difference1,difference2,difference3,difference4,difference5,difference6,difference7,difference8,difference9,difference10,difference11;
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
	inData.open("tempdata.dat");
	cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10>>n11>>n12;
	difference1=n2-n1;
	difference2=n3-n2;
	difference3=n4-n3;
	difference4=n5-n4;
	difference5=n6-n5;
	difference6=n7-n6;
	difference7=n8-n7;
	difference8=n9-n8;
	difference9=n10-n9;
	difference10=n11-n10;
	difference11=n12-n11;
	cout<<n1<<'\t'<<endl;
	cout<<n2<<'t'<<difference1<<endl;
	cout<<n3<<'\t'<<difference2<<endl;
	cout<<n4<<'\t'<<difference3<<endl;
	cout<<n5<<'\t'<<difference4<<endl;
	cout<<n6<<'\t'<<difference5<<endl;
	cout<<n7<<'\t'<<difference6<<endl;
	cout<<n8<<'\t'<<difference7<<endl;
	cout<<n9<<'\t'<<difference8<<endl;
	cout<<n10<<'\t'<<difference9<<endl;
	cout<<n11<<'\t'<<difference10<<endl;
	cout<<n12<<'\t'<<difference11<<endl;
	inData.close();
	return 0;
}
