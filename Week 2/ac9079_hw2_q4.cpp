#include <iostream>
using namespace std;

int main()
{
    int num1, num2;


    cout << " Please enter two positive integers, separated by a space:" << endl;  // User will input two positive integers separated by a space
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;   // "+" symbol equals addition of the two positive integers

    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;   // "-" symbol equals subtraction of the two positive integers

    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;   // "*" symbol equals multiplication of the two positive integers

    cout << num1 << " / " << num2 << " = " << ((double)num1) / num2 << endl;   // "/" symbol Division of the positive integers

    cout << num1 << " div " << num2 << " = " << num1 / num2 << endl;   // "Div" mode of the two positive integers

    cout << num1 << " mod " << num2 << " = " << num1 % num2 << endl;   // "Mod" mode of the two positive integers

    cout << endl;

    return 0;

}

