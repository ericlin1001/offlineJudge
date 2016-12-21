#include<cmath>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < int (sqrt(n)+1);i++)
    {
        if (n%i==0)
         return 0;
    }
    return 1;
}