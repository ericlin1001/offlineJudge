#include<iostream>
#include <cmath>
#include<math.h>

using namespace std;

int main ()
{
    double a;double b;double c;double d;
    double A;double B;double C;double S;
    cin >> a >> b >> c >> d;
    A = (a+b+c+d)/4;
    B = pow(a-A,2)+pow(b-A,2)+pow(c-A,2)+pow(d-A,2);
    C = B/3;
    S = sqrt(C);


    cout << S <<endl;

    return 0;
}
