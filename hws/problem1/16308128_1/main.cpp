#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	float a, b, c, d, e, f, g, h, i, j, k, l,m,n,o,p,q,r,s,t,u,v,w,average;
	cin>> a>> b>> c>> d >>e>> f>> g>> h>> i>> j>> k>>l;
	ofstream outDate;
	outDate.open("tempdata.dat");

	average = (a + b + c + d + e + f + g + h + i + j + k + l) / 12;

	m = b - a;
	n = c - b;
	o = d - c;
	p = e - d;
	q = f - e;
	r = g - f;
	s = h - g;
	t = i - h;
	u = j - i;
	v = k - j;
	w = l - k;

	cout << average << endl;
	outDate << a << endl;
	outDate << b << '\t' << m << endl;
	outDate << c << '\t' << n << endl;
	outDate << d << '\t' << o << endl;
	outDate << e << '\t' << p << endl;
	outDate << f << '\t' << q << endl;
	outDate << g << '\t' << r << endl;
	outDate << h << '\t' << s << endl;
	outDate << i << '\t' << t << endl;
	outDate << j << '\t' << u << endl;
	outDate << k << '\t' << v << endl;
	outDate << l << '\t' << w << endl;

	system("pause");
	outDate.close();
	return 0;
}
