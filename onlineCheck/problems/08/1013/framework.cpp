#include "source.cpp"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

  cout << setprecision(2) << fixed << celsiusToFahrenheit(39.0) << endl;
  cout << setprecision(2) << fixed << fahrenheitToCelsius(120.0) << endl;

  display();
  return 0;
}
