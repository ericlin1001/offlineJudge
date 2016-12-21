#include "source.cpp"
#include<iostream>
using namespace std;

int main()
{
	long a, b;
	a = -27; b = 230;
	swap(a, b);
	cout << a << ' ' << b << endl;
	a = 1000000000; b = -7989;
	swap(a, b);
	cout << a << ' ' << b << endl;
	return 0;
}