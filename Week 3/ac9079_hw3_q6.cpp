#include <iostream>
#include <string>
using namespace std;

int main()
{
    int duration, hour, minutes;
    double rate, cost;
    string day;
    char colon;

    cout << "What day did you make the call (Mo, Tu, We, Th, Fr, Sa, Su)?" << endl; // User will input the day of the week call was made
    cin >> day;

    cout << "What time did your call started (24-hour format)?" << endl; // User will input the time that the call started (24-hour format)
    cin >> hour >> colon >> minutes;

    cout << "How long was your call (in minutes)?" << endl; // User will input the length of the call (in minutes)
    cin >> duration;

 // Branching if-else statement that states the price per minute depending on when the call was made
    if ((day != "Sa") && (day != "Su")) {    // The call was made not on a Saturday or a Sunday (only Mo-Fr)
        if ((hour >= 8) && (hour <= 18)) {
            if ((hour == 18) && (minutes > 0)) {
                rate = .25;
            }
            else {
                rate = .40;   // A call between the hours of 8am to 6pm has a rate of $0.40 per minute (Mo-Fr)
            }
        }
        else {
            rate = .25;    // A call before 8am or after 6pm has a rate of $0.25 per minute (Mo-Fr)
        }
    }
    else {
        rate = .15;       // A call on Saturday (Sa) or Sunday (Su) has a rate of $0.15 per minute
    }

    cost = duration * rate; // The cost of the call equals the duration of the call times the rate

    cout << "The cost of your call is: $" << cost << endl;        // Print Out

    return 0;

}


