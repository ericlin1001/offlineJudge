#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ofstream outData;
	outData.open("tempdata.dat");
	float a, b, B, c, C, d,D, e,E, f,F, g,G, h,H, i,I, j,J, k,K, l,L, m, M;
	cin >> a >> b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
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
	outData <<b<< "  " <<B<< endl;
	outData <<c<< "  " <<C<< endl;
	outData <<d<< "  " <<D<< endl;
	outData <<e<< "  " <<E<< endl;
	outData <<f<< "  " <<F<< endl;
	outData <<g<< "  " <<G<< endl;
	outData <<h<< "  " <<H<< endl;
	outData <<i<< "  " <<I<< endl;
	outData <<j<< "  " <<J<< endl;
	outData <<k<< "  " <<K<< endl;
	outData <<l<< "  " <<L<< endl;
	cout << m << endl;
	return 0;
}