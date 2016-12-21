#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{ifstream infile;
string name;
cout<<"please enter the name of the file :";
getline(cin,name);
infile.open(name.c_str());
while(!infile)
{
cout<<"ERROR! the name of the file is illegal."<<endl;
cout<<"please enter again :";
getline(cin,name);
infile.open(name.c_str());
}
char a;
char b[1000000];
int i=0;
int c,d,e=0;
while(infile.get(a)&&e<=2)
{
b[i]=a;
if(b[i]==' ')
c=i;
else if(b[i]==',')
{e++;
d=i;
while(c<d-1)
{cout<<b[c+1];
c++;
}
cout<<endl;
}
i++;
}
infile.close();
return 0;
}
