#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ofstream outData;
	outData.open("tempdata.dat");
	float a, b, B, c, C, d, D, e, E, f, F, g, G, h, H, i, I, j, J, k, K, l, L, m, M;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
	B = b - a;
	C = c - b;
	D = d - c;
	E = e - d;
	F = f - e;
	G = g - f;
	H = h - g;
	I = i - h;
	J = j - i;
	K = k - j;
	L = l - k;
	m = (a + b + c + d + e + f + g + h + i + j + k + l) / 12;
	outData << a << endl;
	outData << b << "\t" << B << endl;
	outData << c << "\t" << C << endl;
	outData << d << "\t" << D << endl;
	outData << e << "\t" << E << endl;
	outData << f << "\t" << F << endl;
	outData << g << "\t" << G << endl;
	outData << h << "\t" << H << endl;
	outData << i << "\t" << I << endl;
	outData << j << "\t" << J << endl;
	outData << k << "\t" << K << endl;
	outData << l << "\t" << L << endl;
	cout << m << endl;
	return 0;
}