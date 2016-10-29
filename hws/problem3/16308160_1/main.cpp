#include<iostream> 
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream  inFile;
	string    a, b, c;
	char filename[400];

	cout << "Enter the input file name: ";
	cin.getline(filename, 400, '\n');
	inFile.open(filename);

	inFile.ignore(200, ',');
	inFile >> a;
	inFile.ignore(200, ',');
	inFile >> b;
	inFile.ignore(200, ',');
	inFile >> c;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	inFile.close();
	return 0;
}