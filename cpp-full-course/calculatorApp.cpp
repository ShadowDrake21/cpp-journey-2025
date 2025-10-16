#include <iostream>
using namespace std;

int main()
{
  float num1, num2;
  char operation;
  cout << "Please enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Please enter an operation (+, -, *, /, %): ";
  cin >> operation;

  switch (operation)
  {
  case '+':
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    break;
  case '-':
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    break;
  case '*':
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    break;
  case '/':
    cout << num1 << " / " << num2 << " = ";
    if (num2 != 0)
      cout << (num1 / num2) << endl;
    else
      cout << "Error: Division by zero" << endl;
    break;
  case '%':
    cout << num1 << " % " << num2 << " = ";
    bool isNum1Int, isNum2Int;
    (int)num1 == num1 ? isNum1Int = true : isNum1Int = false;
    (int)num2 == num2 ? isNum2Int = true : isNum2Int = false;

    if (isNum1Int && isNum2Int)
    {
      cout << (int)num1 % (int)num2 << endl;
    }
    else
    {
      cout << "Error: You can only use modulus operator with integers" << endl;
    }
    break;
  default:
    cout << "Error: Invalid operation" << endl;
  }
}