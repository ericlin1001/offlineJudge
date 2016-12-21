#include "source.cpp"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

  cout << setprecision(3) << fixed << footToMeter(1.0) << endl;
  cout << setprecision(3) << fixed << meterToFoot(20.0) << endl;

  display();
  return 0;
}
