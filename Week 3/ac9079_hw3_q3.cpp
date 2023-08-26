#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Please enter value of a: ";   // User will input the value of a
    cin >> a;
    cout << "Please enter value of b: ";   // User will input the value of b
    cin >> b;
    cout << "Please enter value of c: ";   // User will input the value of c
    cin >> c;

    // The Magic Formula (cout result will have digits after decimal point)
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "This equation has infinite number of solutions"; // Equation has infinite number of solutions
            } else {
                cout << "This equation has no solution";   // Equation has no solution
            }
        } else {
            double solution = -c / b;
            cout << "This equation has a single real solution x=" << solution << endl; // Equation has a single real solution
        }
    } else {
        double discriminant = b * b - 4 * a * c;    // Discriminant b square - 4 ac

        if (discriminant > 0) {
            double solution_1 = (-b + sqrt(discriminant)) / (2 * a);
            double solution_2 = (-b - sqrt(discriminant)) / (2 * a);

            cout << "This equation has two real solutions x=" << solution_1 << " and x=" << solution_2 << endl; // Equation has two real solutions
        } else if (discriminant == 0) {
            double solution = -b / (2 * a);

            cout << "This equation has a single real solution x=" << solution << endl;  // Equation has a single real solution

        } else {
            cout << "This equation has no real solution";   // Equation has no real solution
        }
    }

    return 0;
}



