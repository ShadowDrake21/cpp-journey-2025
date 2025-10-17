#include <iostream>
using namespace std;

void function();

int main()
{
  cout << "Hello from main()\n";

  function();
}

void function()
{
  cout << "Hello from function()" << endl;
}