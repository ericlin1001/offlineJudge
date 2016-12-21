#include "source.cpp"
#include <iostream>
using namespace std;
void test(long n)
{
  cout << "The sum of digits for " << n << " is " << sumDigits(n) << endl;
}
int main()
{
  
  test(234);
  test(-234);
  test(123456789);
  test(-222222222);
  return 0;
}
