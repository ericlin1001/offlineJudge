#include "source.cpp"
#include <iostream>
using namespace std;
void test(int num)
{
  cout << "The reverse of integer " << num << " is " << reverse(num) << endl;
}
int main()
{
  
  test(3456);
  test(-3456);
  test(9);
  test(-9);
  test(0);
  return 0;
}
