#include <iostream>
#include <string>
using namespace std;

int main ()

{

    int graduation_Year, current_Year, year;
    string studentName, studentStatus;

    cout<<"Please enter your name: "<<endl;  // User will input name
    cin>>studentName;

    cout<<"Please enter your graduation year: "<<endl;  // User will input graduation year
    cin>>graduation_Year;

    cout<<"Please enter current year: "<<endl;   // User will input current year
    cin>>current_Year;

    year = graduation_Year - current_Year;   // year equals graduation year minus the current year

    if(year == 0) {
        studentStatus = "have graduated";  // If year equals zero, the student status is that the student have graduated
    }
    else if(year == 1) {
        studentStatus = "are a Senior";     // If year equals 1, the student status will be Senior
    }
    else if(year == 2) {
        studentStatus = "are a Junior";    // If year equals 2, the student status will be Junior
    }
    else if(year == 3) {
        studentStatus = "are a Sophomore";  // If year equals 3, the student status will be Sophomore
    }
    else if(year == 4) {
        studentStatus = "are a Freshman";  // If year equals 4, the student status will be Freshman
    }
    else {
        studentStatus = "are not in college yet"; // Otherwise, student status will be that the student is not in college yet
    }

    cout<<studentName<<", you "<<studentStatus;   // Print Out


    return 0;
}









