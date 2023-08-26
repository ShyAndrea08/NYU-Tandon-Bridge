#include <iostream>
using namespace std;


const int MINUTES_IN_A_DAY = 1440;  // Number of minutes in a day = 1440
const int MINUTES_IN_AN_HOUR = 60;  // Number of minutes in an hour = 60

int main()
{
    int daysJohnWorkedAmount, hoursJohnWorkedAmount, minutesJohnWorkedAmount, daysBillWorkedAmount, hoursBillWorkedAmount, minutesBilledWorkedAmount;
    int totalDaysWorkedAmount, totalHoursWorkedAmount, totalMinutesWorkedAmount, remainingTime, totalTimeInMinutes;


    cout << "Please enter the number of days John has worked:" << endl;   // User will input number of days John worked
    cin >> daysJohnWorkedAmount;


    cout << "Please enter the number of hours John has worked:" << endl;   // User will input number of hours John worked
    cin >> hoursJohnWorkedAmount;


    cout << "Please enter the number of minutes John has worked:" << endl;  // User will input number of minutes John worked
    cin >> minutesJohnWorkedAmount;

    cout << endl;


    cout << "Please enter the number of days Bill has worked:" << endl;    // User will input number of days Bill worked
    cin >> daysBillWorkedAmount;

    cout << "Please enter the number of hours Bill has worked:" << endl;   // User will input number of hours Bill worked
    cin >> hoursBillWorkedAmount;

    cout << "Please enter the number of minutes Bill has worked:" << endl;   // User will input number of minutes Bill worked
    cin >> minutesBilledWorkedAmount;

    totalTimeInMinutes = ((daysJohnWorkedAmount + daysBillWorkedAmount) * MINUTES_IN_A_DAY) + ((hoursJohnWorkedAmount + hoursBillWorkedAmount) * MINUTES_IN_AN_HOUR) + minutesJohnWorkedAmount + minutesBilledWorkedAmount; // The total of minutes John and Bill worked will be added as well


    cout << endl;

    totalDaysWorkedAmount = totalTimeInMinutes / MINUTES_IN_A_DAY; // Total time in minutes will be divided by minutes in a day to give us the total days worked amount
    remainingTime = totalTimeInMinutes % MINUTES_IN_A_DAY; // Total time in minutes will be divided by minutes in a day to give us the remaining time

    totalHoursWorkedAmount = remainingTime / MINUTES_IN_AN_HOUR; // Remaining time will be divided by minutes in an hour will give us the total hours worked amount
    remainingTime = remainingTime % MINUTES_IN_AN_HOUR; // Remaining time will be divided by minutes in an hour to give us the remaining time

    totalMinutesWorkedAmount = remainingTime;

    cout << endl;

    cout << "The total time both of them worked together is: " << totalDaysWorkedAmount << " days, " << totalHoursWorkedAmount << " hours and " << totalMinutesWorkedAmount << " minutes. " << endl;

    cout << endl;

    return 0;
}
