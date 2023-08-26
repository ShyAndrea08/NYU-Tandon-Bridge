#include <iostream>
using namespace std;

const int QUARTER = 25;   // total value of a quarter = 25
const int DIME = 10;      // total value of a dime = 10
const int NICKEL = 5;     // total value of a nickel = 5
const int PENNY = 1;      // total value of a penny = 1

int main()
{

    int dollarAmount, centAmount;
    int totalAmount, totalQuarters, totalDimes, totalNickels, totalPennies;
    int remainingAmount;

    cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;  // User will input the amount in format of dollars and cents separated by a space
    cin >> dollarAmount >> centAmount;

    totalAmount = (dollarAmount * 100) + centAmount;

    totalQuarters = totalAmount / QUARTER;      // The total number of quarters equals total amount / quarter
    remainingAmount = totalAmount % QUARTER;

    totalDimes = remainingAmount / DIME;      // The total number of dimes equals the remaining amount / dime
    remainingAmount = remainingAmount % DIME;

    totalNickels = remainingAmount / NICKEL;   // The total number of nickels equals the remaining amount / nickel
    remainingAmount = remainingAmount % NICKEL;

    totalPennies = remainingAmount / PENNY;    // The total number of pennies equals the remaining amount / penny


    cout << endl;

    cout << dollarAmount << " dollars and " << centAmount << " cents are:" << endl;

    cout << totalQuarters << " quarters, " << totalDimes << " dimes, " << totalNickels << " nickels and " << totalPennies << " pennies" <<endl;

    return 0;

}


