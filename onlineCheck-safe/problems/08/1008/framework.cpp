#include "source.cpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int count = 0;
  int i;
  for (i = 2; count < 1000; i++)
  {
    // Display each number in five positions
    if (isPrime(i))
    {
      //cout << setw(5) << i;
      count++;
      //if (count % 10 == 0) cout << endl;
    }
  }
  cout << --i << endl;
  return 0;
}
