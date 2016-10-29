#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in1;
	ofstream out1;
	string a,t[3];
	cout<<"Enter the input file name: "<<endl;
	cin>>a;
	in1.open(a.c_str());
	int i=0,j,k,o;
	char c[201],d[201];
	
	while(true)
	{
		in1>>c;
			k=0;
		for (j=0;j<=200;j++)
			if(c[j]==NULL)
				break;
			else
			if(c[j]==',')
				{
					i++;
					k=1;
					break;
				}
		if(k==1)
			{
				in1>>c;
				for(o=0;o<=200;o++)
					{
						if(c[o]==NULL)
						{
							break;
						}
						if('a'<=c[o]&&c[o]<='z')
							cout<<c[o];
						if('A'<=c[o]&&c[o]<='Z')
							cout<<c[o];
					}
				cout<<endl;
			}
		if(i==3)
			return 0;
	}
	return 0;
}
