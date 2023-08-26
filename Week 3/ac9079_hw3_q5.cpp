#include <iostream>
#include <cmath>
using namespace std;

const double POUND_IN_KILOGRAM = 0.453592;  // A pound in kilogram form is 0.453592
const double INCH_IN_METER = 0.0254;       // An inch in meter form is 0.0254

int main()
{
    double weightPounds, weightKilogram, heightInches, heightMeters, heightSquare, bmi;

    cout << "Please enter weight (in pounds): " << endl;    // User will input weight (in pounds)
    cin >> weightPounds;

    cout << "Please enter height (in inches): " << endl;    // User will input height (in inches)
    cin >> heightInches;

    weightKilogram = weightPounds * POUND_IN_KILOGRAM;  // Weight in Kg equals weight in pounds times pound in a Kg
    heightMeters = heightInches * INCH_IN_METER;    // Height in Meters equals height in inches times inch in a Meter

    heightSquare = pow(heightMeters, 2);
    bmi = weightKilogram / heightSquare;

    // Branching if-else statement is used in order to know if weight status is underweight, normal, overweight or obese
    if (bmi < 18.5)
        cout << "The weight status is : Underweight."; // A BMI below 18.5 makes weight status: Underweight
    else if (bmi >= 18.5 && bmi < 25)
        cout << "The weight status is: Normal.";  // A BMI equal to 18.5 and less than 25 makes weight status: Normal
    else if (bmi >= 25 && bmi < 30)
        cout << "The weight status is: Overweight."; // A BMI above 25 and below 30 makes weight status: Overweight
    else
        cout << "The weight status is: Obese."; // A BMI 30 and above makes the weight status: Obese


    cout << endl;  // Print out


    return 0;
}