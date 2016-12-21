#include<iostream> 
#include<fstream>
#include<string>

using namespace std;
int main()
{
	ifstream  inFile;
	string  filename;

	cout << "Enter the input file name: ";
	cin>>filename;
	inFile.open(filename.c_str());

if (!inFile)
{
		cout << "文件打开失败！";
		return -1;
}
	string a;
	int b = 0;
while (b < 3)
{
		inFile.ignore(200, ',');
		inFile.ignore(1,' ');
		inFile >> a;
		cout << a << endl;
		b++;
}
inFile.close();
return 0;


}


