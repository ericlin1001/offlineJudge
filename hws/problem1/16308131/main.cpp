#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    //declare and open files
    ofstream outFile;
    outFile.open("tempdata.dat");

    //declare variables
    float temp1, temp2;
    float sum_avg;

    //input and output
    cin >> temp1;
    outFile << temp1 << endl;
    sum_avg = temp1;

    for(int i=1 ; i<=11 ; i++)
    {
        cin >> temp2;
        outFile << temp2 << "\t" << temp2 - temp1 << endl;
        sum_avg = sum_avg + temp2;
        temp1 = temp2;
    }

    sum_avg = sum_avg / 12;
    cout << sum_avg << endl;

    return 0;
}
