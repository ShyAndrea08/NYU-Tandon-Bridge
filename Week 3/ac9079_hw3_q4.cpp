#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{
    double realNum;
    int roundingMethod;

    cout << "Please enter a Real number: " << endl; // User will input a real number
    cin >> realNum;

    cout << "Choose your rounding method: " << endl; // User will choose rounding method

    cout << "1. Floor round" << endl;     // Method #1 - Floor Round

    cout << "2. Ceiling round" << endl;    // Method #2 - Ceiling Round

    cout << "3. Round to the nearest whole number" << endl;   // Method #3 - Round to the nearest whole number
    cin >> roundingMethod;

    switch (roundingMethod) {   // Switch Statement is utilized when the user selects any of the rounding methods
        case  FLOOR_ROUND:         // Case one designated to rounding method 1 (Floor round)
            if (realNum < 0) {
                realNum -= 1;
            }
            cout << (int)realNum;
            break;
        case CEILING_ROUND:         // Case two designated to rounding method 2 (Ceiling round)
            if (realNum > 0) {
                realNum += 1;
            }
            cout << (int)realNum;
            break;
        case ROUND:          // Case three designated to rounding method 3 (Round to the nearest whole number)
            if (realNum > 0) {
                realNum += 0.5;
            } else {
                realNum -= 0.5;
            }
            cout << (int)realNum;
            break;
        default:
            break;
    }

    cout << endl;   // Print Out

    return 0;

}

