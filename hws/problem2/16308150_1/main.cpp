


#include <iostream>
#include <math.h>
using namespace std;
int a, b, c, d;
double m, s;
int main()
{
	cin >> a >> b >> c >> d;
	m = (a + b + c + d) / 4.0;
	s =( pow(a - m, 2) + pow(b - m, 2) + pow(c - m, 2) + pow(d - m, 2))/3.0;
	s = sqrt(s);
	cout << m << "/t" << s << endl;
	return 0;
}




