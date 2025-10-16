#include <iostream>
using namespace std;

int main()
{
  int usersPin = 1234, pin, attempts = 0;

  do
  {
    cout << "Enter your pin: ";
    cin >> pin;
    attempts++;

    if (pin == usersPin)
    {
      cout << "Access granted!" << endl;
    }
    else
    {
      cout << "Access denied!" << endl;
      cout << "Attempts left: " << (3 - attempts) << endl;
    }
  } while (pin != usersPin && attempts < 3);

  if (attempts == 3 && pin != usersPin)
  {
    cout << "Card blocked. Please countact your bank." << endl;
  }
}