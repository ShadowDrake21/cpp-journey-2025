#include <iostream>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Enter three sides of a triangle: ";
  cin >> a >> b >> c;
  if (a == b)
  {
    if (b == c)
    {
      cout << "Equilateral triangle" << endl;
    }
    else
    {
      cout << "Isosceles triangle" << endl;
    }
  }
  else
  {
    if (b == c || a == c)
    {
      cout << "Isosceles triangle" << endl;
    }
    else
    {
      cout << "Scalene triangle" << endl;
    }
  }
}