#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	float m, s;
	m = (a + b + c + d) / 4.0;
	s = pow(a - m, 2) + pow(b - m, 2) + pow(c - m, 2) + pow(d - m, 2);
	s = s / 4.0;
	s = sqrt(s);
	cout << m <<" \t" << s << endl;
	return 0;

}