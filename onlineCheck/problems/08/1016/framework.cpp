#include "source.cpp"
#include <iostream>
using namespace std;
void test(char ch)
{
  cout << "The lowercase of letter " << ch << " is " << upperCaseToLowerCase(ch) << endl;
}
int main()
{
  
  test('A');
  test('H');
  test('Z');
  return 0;
}
