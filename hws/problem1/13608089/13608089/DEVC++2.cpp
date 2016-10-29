

#include <iostream>

#include <fstream>

#include <cmath>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	inFile.open("mydata.dat");
	outFile.open("tempdata.dat");
	
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float g;
	float h;
	float i;
	float j;
	float k;
	float l;
	inFile >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >>k >> l;
	outFile << a <<endl;
	outFile << b << '\t' << b-a << endl;
	outFile << c << '\t' << c-b << endl;
	outFile << d << '\t' << d-c << endl;
	outFile << e << '\t' << e-d << endl;
	outFile << f << '\t' << f-e << endl;
	outFile << g << '\t' << g-f << endl;
	outFile << h << '\t' << h-g << endl;
	outFile << i << '\t' << i-h << endl;
	outFile << j << '\t' << j-i << endl;
	outFile << k << '\t' << k-j << endl;
	outFile << l << '\t' << l-k << endl;
	
	cout << 1/12 * (a+b+c+d+e+f+g+h+i+j+k+l) << endl;
	
	inFile.close();
	outFile. close() ;
	return 0;
}

