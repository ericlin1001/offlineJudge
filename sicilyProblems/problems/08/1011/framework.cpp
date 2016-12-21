#include "source.cpp"
#include <iostream>
#include <iomanip>
using namespace std;
const int n1 = 100;
const int n2 = 1000;

int main()
{
  int count = 0;
  for(int i=1; i<=n1; i++)
    for(int j=1; j<=n2; j++)
      if ( gcd(i,j)==i ) count ++;
  cout << count << endl;
  
  /*
  count = 0;
  for(int i=1; i<=n1; i++)
    for(int j=1; j<=n1; j++)
      if ( gcd1(i,j)==i ) count ++;
  cout << count << endl;
  */
  return 0;
}
