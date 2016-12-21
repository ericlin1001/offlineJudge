// Problem#: 11241
// Submission#: 3213924
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long n)
{
    for (int i = 2; i < int(sqrt(n) + 1); i++)
    {
        if (n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long a;
    int count = 0;
    cin >> a;
    for (long i = 2; i <=a; i++)
    {
        if (isprime(int(pow(2,i)-1)))
            count++;
    }
    cout << count << endl;
    return 0;
}