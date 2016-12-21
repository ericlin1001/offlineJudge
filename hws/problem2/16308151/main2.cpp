#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c, d;
	double e, f, g, h, i, A, B, C, D, E, S;
	cin >> a >> b >> c >> d;
	e = (a + b + c + d) / 4;
	f = a - e;
	g = b - e;
	h = c - e;
	i = d - e;
	A = pow(f, 2);
	B = pow(g, 2);
	C = pow(h, 2);
	D = pow(i, 2);
	E = (A + B + C + D) / 4;
	S = sqrt(E);
	cout << S << endl;
	return 0;
}