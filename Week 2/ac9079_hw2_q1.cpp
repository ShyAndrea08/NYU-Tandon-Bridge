#include <iostream>
using namespace std;

const int QUARTER = 25;   // total value of a quarter = 25
const int DIME = 10;      // total value of a dime = 10
const int NICKEL = 5;     // total value of a nickel = 5
const int PENNY = 1;      // total value of a penny = 1

int main()
{
    int numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennies;
    int totalNumberCoins, totalAmountDollar, TotalAmountCents;


    cout<<"Please enter number of coins:"<<endl;
    cout << "# of quarters:";    // # equals number, number of quarters
    cin >> numberOfQuarters;

    cout << "# of dimes:";       // # equals number, number of dimes
    cin >> numberOfDimes;

    cout << "# of nickels:";     // # equals number, number of nickels
    cin >> numberOfNickels;

    cout << "# of pennies:";     // # equals number, number of pennies
    cin >> numberOfPennies;

    totalNumberCoins = (numberOfQuarters * QUARTER) + (numberOfDimes * DIME) +
        (numberOfNickels * NICKEL) + (numberOfPennies * PENNY);  // The total number of coins comprises of all the number of quarters, dimes, nickels and pennies combined.

    totalAmountDollar = totalNumberCoins / 100; // The total Amount of Dollars will be the total number of coins / 100
    TotalAmountCents = totalNumberCoins % 100;  // The total Amount of Cents will be the total number of coins % 100

    cout << "The total is " << totalAmountDollar << " dollars and " << TotalAmountCents << " cents." << endl;

    return 0;

}

