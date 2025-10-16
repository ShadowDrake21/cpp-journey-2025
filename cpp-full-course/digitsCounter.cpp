#include <iostream>
using namespace std;

int main()
{
  int number = 0;
  cout << "Enter a number: ";
  cin >> number;

  if (number == 0)
  {
    cout << "You have entered 0 which has no digits." << endl;
  }
  else
  {
    if (number < 0)
    {
      number = -1 * number;
    }
    int counter = 0;
    while (number > 0)
    {
      number /= 10;
      counter++;
    }
    cout << "The number has " << counter << " digits." << endl;
  }
}