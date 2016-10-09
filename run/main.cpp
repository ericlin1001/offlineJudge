#include<iostream>
#include<fstream>
using namespace std;
int main(){
double t,l,a=0;
ofstream out("tempdata.dat");
for(int i=0;i<12;i++){
cin>>t;
a+=t;
out<<t;
if(i!=0){
out<<"\t"<<t-l<<endl;
}else{
	out<<endl;
}
l=t;
}
cout<<"a"<<endl;
out<<a/12<<endl;
return 0;
}
