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

long reverse(long n)
{
    long reversed = 0, remainder=0;
    while (n > 0)
    {
        remainder = n % 10;
        n = (n - remainder) / 10;
        reversed = reversed * 10 + remainder;
    }
    return reversed;
}

int main()
{
    int n, count = 0, num = 2;
    cin >> n;
    while (count < n)
    {
        if (isprime(num) && num == reverse(num))
        {
            count++;
        }
        num++;
    }
    cout << num - 1 << endl;
    return 0;
}