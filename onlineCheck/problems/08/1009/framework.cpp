#include "source.cpp"
#include <iostream>
#include <iomanip>
using namespace std;
const int w = 5;

int main()
{
  cout << setprecision(w) << fixed << pi(10) << endl;
  cout << setprecision(w) << fixed << pi(98)  << endl;
  return 0;
}

