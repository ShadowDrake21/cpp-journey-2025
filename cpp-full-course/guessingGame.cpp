#include <iostream>
using namespace std;

int main()
{
  int hostUserNumber, guestUserNumber;
  cout << "Host: ";
  cin >> hostUserNumber;
  system("clear");
  cout << "Guest: ";
  cin >> guestUserNumber;

  (hostUserNumber == guestUserNumber) ? cout << "You guessed it!" << endl : cout << "Try again!" << endl;
}