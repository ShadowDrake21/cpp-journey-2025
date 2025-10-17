#include <iostream>
using namespace std;

int main()
{
  int rows, cols;
  char symbol;
  cout << "Enter number of rows: ";
  cin >> rows;
  cout << "Enter number of columns: ";
  cin >> cols;
  cout << "Enter symbol to draw triangle: ";
  cin >> symbol;

  for (int i = rows; i >= 1; --i)
  {
    for (int j = 1; j <= i; ++j)
    {

      cout << symbol << " ";
    }
    cout << endl;
  }
}