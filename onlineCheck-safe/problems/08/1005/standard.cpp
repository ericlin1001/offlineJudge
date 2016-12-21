#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double sqrt(double num,double precision)
{
    double nextGuess = num, lastGuess = num;
    do
    {
        lastGuess = nextGuess;
        nextGuess = (lastGuess + (num / lastGuess)) / 2;
    } while (abs(nextGuess - lastGuess) >= precision);
    return nextGuess;
}

int main()
{
    int times;
    double num, precision;
    cin >> times;
    for (int i=1; i <= times; i++)
    {
        cin >> num >> precision;
        cout << fixed << setprecision(8) << sqrt(num, precision) << endl;
    }
    return 0;
}