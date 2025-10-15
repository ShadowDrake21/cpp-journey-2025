#include <iostream>
using namespace std;

int main()
{
  // cout << 5 + 2 << endl;
  // cout << 5 / 2 << endl;
  // cout << 5 / 2.0 << endl;
  // cout << 5 % 2 << endl;

  // int counter = 7;
  // counter++;
  // cout << counter << endl;
  // counter--;
  // cout << counter << endl;

  // int counter2 = 7;
  // cout << counter2++ << endl;
  // cout << ++counter2 << endl;

  // int a = 5, b = 5;
  // cout << (a >= b);

  // int a = 5, b = 5;
  // cout << (a == 5 || b == 5) << endl;

  // int a = 5, b = 8;
  // cout << (a == 5 && b == 5 + 3) << endl;

  // =, +=, -=, *=, /=, %=
  // int x = 5;
  // cout << "Initial x is " << x << endl;
  // x += 3;
  // cout << "x += 3 is " << x << endl;
  // x -= 3;
  // cout << "x -= 3 is " << x << endl;
  // x *= 3;
  // cout << "x *= 3 is " << x << endl;
  // x /= 3;
  // cout << "x /= 3 is " << x << endl;
  // x %= 3;
  // cout << "x %= 3 is " << x << endl;

  int a = 5, b = 4;
  cout << a + (b++) << endl; // 9
  cout << (--a) + b << endl;

  cout << !(true && false) << endl;
  cout << (true && (false || true)) << endl;

  int x = 7;
  cout << (++x <= 9 && x + 2 >= 10) << endl;

  int y = 3;
  cout << (y == (y++)) << endl;

  float z = 8;
  z += 2;
  cout << z << endl;
  z /= 2;
  cout << z << endl;
}
