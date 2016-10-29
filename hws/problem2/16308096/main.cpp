#include<iostream>
#include<cmath>

using namespace std;

float a, b, c, d;
float mean;
float m,s;

int main()
{
	cout << "Please input 4 integer values separatedly";
	cin >> a >> b >> c >> d;
	mean = 0.25*(a + b + c + d);
	m = (a - mean)*(a - mean) + (b - mean) *(b - mean) + (c - mean) * (c - mean) + (c - mean) *(c - mean);
	s = sqrt(m/ 4.0);
	cout << "The mean is " << mean << endl;
	cout << "The standard deviation is " << s << endl;
	return 0;
}
