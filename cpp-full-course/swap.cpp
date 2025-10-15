#include <iostream>
using namespace std;

int main()
{
  int a = 20, b = 10;
  // int temp = a;
  // cout << "Before swap: " << endl;
  // cout << "a = " << a << ", b = " << b << endl;
  // a = b;
  // b = temp;
  // cout << "After swap: " << endl;
  // cout << "a = " << a << ", b = " << b << endl;
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "After swap: " << endl;
  cout << "a = " << a << ", b = " << b << endl;
}