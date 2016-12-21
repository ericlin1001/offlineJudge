#include "source.cpp"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b;
	a = 0; b = 0;
	counting("abC&&^321*i", a, b);
	cout << a << ' ' << b << endl;
	a = 0; b = 0;
	counting("d:\\personal\\documents\\visual studio 2013\\projects\\test\\test\\main.cpp(9): warning C4018", a, b);
	cout << a << ' ' << b << endl;
	a = 0; b = 0;
	counting("MyClass * mc = new MyClass();", a, b);
	cout << a << ' ' << b << endl;
	a = 0; b = 0;
	counting("US & Canada: +1 800 678 4333", a, b);
	cout << a << ' ' << b << endl;
	return 0;
}