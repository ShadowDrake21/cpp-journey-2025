#include <iostream>
using namespace std;

int main()
{
  // cout << 5 % 2 << endl;
  int number;
  cout << "Enter your number: ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "Even number" << endl;
  }
  else
  {
    cout << "Odd number" << endl;
  }
  cout << "Thanks. Bye!" << endl;
}