#include<string>
using namespace std;
void counting(string  S, int & aphabeticNum, int & numericNum)
{
    for (string::size_type k = 0; k < S.length(); k++)
    {
        if (islower(S[k]) || isupper(S[k]))
            aphabeticNum++;
        else if (S[k] >= '0' && S[k] <= '9')
            numericNum++;
    }
}