#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k, n, ans = 0;
    cin >> k >> n;
    for (int i = 0; n > 0; i++)
    {
        ans += (n%2)*pow(k, i);
        n = n/2;
    }
    cout << ans << endl;
    return 0;
}