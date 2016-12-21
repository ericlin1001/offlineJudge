#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long n)
{
    for (int i = 2; i < int (sqrt(n)+1);i++)
    {
        if (n%i==0)
         return 0;
    }
    return 1;
}

int main()
{
    long a;
    int count =0;
    cin >> a;
    for (long i = 5; i <a ;i++)
    {
        if (isprime(i) && isprime(i-2))
            count ++;
    }
    cout << count <<endl;
    return 0;
}