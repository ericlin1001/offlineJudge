#include<iostream>
using namespace std;
void swap(long &a,long &b){
a^=b^=a^=b;
cout<<"Hello World"<<endl;
}