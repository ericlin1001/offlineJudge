#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ifstream read;
	string filename;
	
	cout<<"Enter the input file name: ";
	getline(cin,filename,'\n');
	read.open(filename.c_str());
	if(!read){
        cout << "文件打开失败！" << endl;
        return -1;
    }
    string s;
    
    //所有的都列出来 
    /*
    for(read.ignore(200,',');!read.eof();){
		read>>s;
		while(s[s.length()-1]==','){
			for(int j=0;j<s.length()-1;++j){
				cout<<s[j];
			}
			cout<<endl;
			read>>s;
		}
		cout<<s<<endl;
		read.ignore(200,',');
	}
	*/
	
	
	//只列前三个 
	int a=0;
	for(read.ignore(200,',');!read.eof();){
		read>>s;	
		while(s[s.length()-1]==','){
			for(int j=0;j<s.length()-1;++j){
				cout<<s[j];
			}
			cout<<endl;
			++a;
			if(a==3)	return 0;
			read>>s;	
		}
		cout<<s<<endl;
		++a;
		if(a==3)	return 0;
		read.ignore(200,',');
	}
	
	read.close();
	return 0;
}

