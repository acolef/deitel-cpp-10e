/* A program that calculates the maximum heart rate and target heart
 * rate for a user. The program stores the user's full name and 
 * birthday (dd/mm/yyyy).
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <string>
#include "HeartRate.h"

using namespace std;

int main(){
    int curDay, curMonth, curYear;          // Declare variables to store today's date
    int birthDay, birthMonth, birthYear;    // Declare variables to store user's birthday
    string first, last;                             // Declare variables to store user's name
    
    // Prompt for user inputs
    cout << "Today's date (dd/mm/yyyy) is: ";               cin >> curDay >> curMonth >> curYear;
    cout << "Please enter your birthday (dd/mm/yyyy): ";    cin >> birthDay >> birthMonth >> birthYear;
    cin.ignore(1000, '\n');
    cout << "Please enter your first name: ";               getline(cin, first);
    cout << "Please enter your last name: ";                getline(cin, last);
    
    HeartRates heartRates(first, last, birthDay, birthMonth, birthYear);    // Instantiate object of class HeartRates
                                                                            // and pass stored values to its parameters
    
    // Output the results
    cout << "\nToday's date: " << curDay << "/" << curMonth << "/" << curYear
         << "\nName: " << heartRates.getFirstName() << " " << heartRates.getLastName() 
         << "\nBirthday: " << heartRates.getBirthDay() << "/" << heartRates.getBirthMonth() << "/" << heartRates.getBirthYear()
         << "\nAge: " << heartRates.calcAge(curDay, curMonth, curYear)
         << "\nMaximum heart rate: " << heartRates.maxHeartRate(curDay, curMonth, curYear) << " BPM";
        heartRates.targetHeartRate(curDay, curMonth, curYear); 
    cout << " BPM" << endl;
         
    return 0;
}
