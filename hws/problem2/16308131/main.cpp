#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d;
    float m;
    float s;

    cin >> a >> b >> c >> d;

    m = (a+b+c+d)/4;

    a = pow(a-m , 2);
    b = pow(b-m , 2);
    c = pow(c-m , 2);
    d = pow(d-m , 2);
    s = (a+b+c+d)/3;
    s = sqrt(s);

    cout << m << endl << s << endl;

    return 0;

}
