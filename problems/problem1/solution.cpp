#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream in("a.txt");
	ofstream out("b.txt");
	if(!in.is_open()){
		cerr<<"Can't open file: a.txt"<<endl;
		return 0;
	}
	if(!out.is_open()){
		cerr<<"Can't open file: b.txt"<<endl;
		return 0;
	}
	int a;
	in>>a;
	cout<<a<<endl;
	a+=10;
	out<<a;
	in.close();
	out.close();
	return 0;
}
