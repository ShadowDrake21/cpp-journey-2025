#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;
  int result = 1;
  // for (int i = 1; i <= number; i++)
  // {
  //   result *= i;
  // }
  for (int i = number; i >= 1; i--)
  {
    result *= i;
  }
  cout << number << "! = " << result << endl;
}