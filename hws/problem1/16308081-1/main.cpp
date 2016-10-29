#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,b,c;
    ofstream outFile;
    outFile.open("tempdata.dat");
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10 >> a11 >> a12;
    outFile << a1 <<endl;
    outFile << a2 << "\t" << a2-a1 << endl;
    outFile << a3 << "\t" << a3-a2 << endl;
    outFile << a4 << "\t" << a4-a3 << endl;
    outFile << a5 << "\t" << a5-a4 << endl;
    outFile << a6 << "\t" << a6-a5 << endl;
    outFile << a7 << "\t" << a7-a6 << endl;
    outFile << a8 << "\t" << a8-a7 << endl;
    outFile << a9 << "\t" << a9-a8 << endl;
    outFile << a10 << "\t" << a10-a9 << endl;
    outFile << a11<< "\t" << a11-a10 << endl;
    outFile << a12<< "\t" << a12-a11 << endl;
    outFile.close();
    b = a1+a2+a3+a4+a5+a6+a7+a8+a9+a10+a11+a12;
    c = b / 12.0;
    return 0;
}
