#include <iostream>
using namespace std;

int main()
{
    // cout << (int)'a' << endl;
    // cout << int('a') << endl;
    // cout << int('A') << endl;
    // cout << char(65) << endl;
    string arr;
    cout << "Enter your prompt: ";
    getline(cin, arr);
    cout
        << "Your message is: " << arr << endl;

    cout << "ASCII message: " << endl;
    for (size_t i = 0; i < arr.length(); i++)
    {
        cout << int(arr[i]) << " ";
    }
    cout << endl;
}