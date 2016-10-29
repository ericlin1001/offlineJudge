#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream write("tempdata.dat");
	if(!write){
        cout << "文件打开失败！" << endl;
        return -1;
    }
    float a[12],s;
    cin>>a[0];
    write<<a[0]<<endl;
    s=a[0];
    for(int i=1;i<12;++i){
    	cin>>a[i];
    	write<<a[i]<<"\t"<<a[i]-a[i-1]<<endl;
    	s+=a[i];
	}
	cout<<s/12<<endl;
	
	return 0;
}

