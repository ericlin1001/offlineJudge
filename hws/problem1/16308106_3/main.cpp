#include<iostream>
#include<fstream>
using namespace std;
ofstream outfile("tempdate.txt"); 

int main()
{cout<<"��������Ҫ������¶ȵĸ���"<<endl;
int a;
cin>>a;
int i;
i=1;
float s=0;
while(i<=a)
{
	float f;
float c;
if(i<=1)
{
cout<<"�������"<<i<<"���¶�"<<endl;
cin>>c;
outfile<<c<<endl;
}
else
{
cout<<"�������"<<i<<"���¶�"<<endl;
cin>>c;
float e;
e=c-f;
outfile<<c<<" "<<e<<endl;
}
f=c;
s=s+c;
i=i+1 ;
}
cout<<s/a<<endl;
system("pause");
return 0;
 } 
