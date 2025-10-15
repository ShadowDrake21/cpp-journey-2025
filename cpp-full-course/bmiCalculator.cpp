#include <iostream>
using namespace std;

int main()
{
  float weight, height, bmi;
  cout << "Enter weight in kg: ";
  cin >> weight;
  cout << "Enter height in meters: ";
  cin >> height;
  bmi = weight / (height * height);
  cout << "Your BMI is: " << bmi << endl;

  if (bmi < 18.5)
  {
    cout << "You are underweight." << endl;
  }
  else if (bmi >= 18.5 && bmi <= 24.9)
  {
    cout << "You have a normal weight." << endl;
  }
  else
  {
    cout << "You are overweight." << endl;
  }
}