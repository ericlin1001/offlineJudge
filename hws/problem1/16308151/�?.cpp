#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, d, e, f, g, h, i, j, k, l, m;
	float n, o, p, q, r, s, t, u, v, w, x;
	ofstream outdata;
	outdata.open("tempdata.dat");
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
	m = (1.0 / 12.0)*(a + b + c + d + e + f + g + h + i + j + k + l);
	n = b - a;
	o = c - b;
	p = d - c;
	q = e - d;
	r = f - e;
	s = g - f;
	t = h - g;
	u = i - h;
	v = j - i;
	w = k - j;
	x = l - k;
	outdata<< a << endl;
	outdata <<b<<"\t"<<n<< endl;
	outdata << c <<"\t"<< o << endl;
	outdata << d << "\t" << p << endl;
	outdata << e << "\t" << q << endl;
	outdata << f << "\t" << r << endl;
	outdata << g << "\t" << s << endl;
	outdata << h << "\t" << t << endl;
	outdata << i << "\t" << u << endl;
	outdata << j << "\t" << v << endl;
	outdata << k << "\t" << w << endl;
	outdata << l << "\t" << x << endl;
	cout << m << endl;
	return 0;
} 
