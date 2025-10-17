#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int height, width;
  char symbol;
  cout << "Enter height and width of rectangle: ";
  cin >> height >> width;
  cout << "Enter symbol to draw rectangle: ";
  cin >> symbol;

  for (int i = 1; i <= height; i++)
  {
    for (int j = 1; j <= width; j++)
    {
      cout << setw(3) << symbol;
    }
    cout << endl;
  }
}