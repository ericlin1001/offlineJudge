#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream outFile;
    outFile.open("tempadata.dat");
    double a;double b;double c;double d;double e;double f;double g;double h;double i;double j;double k;double l;double m;
    double A;double B;double C;double D;double E;double F;double G;double H;double I;double J;double K;
    cin >>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
    A =  b - a;B = c - b;C = d - c;D = e - d;E = f - e;F = g - f;G =h - g;H = i - h;I = j - i;J = k - j;K = l - k;
    m=(a+b+c+d+e+f+g+h+i+j+k+l)/float(12);

    cout<<m<<endl;
    outFile << a <<endl;
    outFile  << b << "\t" << A <<endl;
    outFile << c << "\t" << B <<endl;
    outFile  << d << "\t" << C <<endl;
    outFile  << e << "\t" << D <<endl;
    outFile  << f << "\t" << E <<endl;
    outFile  << g << "\t" << F <<endl;
    outFile  << h << "\t" << G <<endl;
    outFile  << i << "\t" << H <<endl;
    outFile  << j << "\t" << I <<endl;
    outFile  << k << "\t" << J <<endl;
    outFile  << l << "\t" << K <<endl;

    outFile.close();
    return 0;
}
