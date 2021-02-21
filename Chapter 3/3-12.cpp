/* A program designed to test the capabilities of the Date class.
 * It will display dates based on which object of Date is chosen. 
 * It also accepts the input of a custom date.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date date1{12, 3, 1990};    // Some dates to send to the Date class constructor
    Date date2{4, 0, 2000};
    Date date3{7, 13, 2010};
    Date date4{0, 0, 0};        // This is our "custom" date from user input
    
    int inputDay, inputMonth, inputYear;
    
    cout << "Input a day: ";    cin >> inputDay;        // Accept inputs for day, month, and year
    cout << "Input a month: ";  cin >> inputMonth;
    cout << "Input a year: ";   cin >> inputYear;
    date4.setDay(inputDay);     date4.setMonth(inputMonth);     date4.setYear(inputYear);   // Store inputs in date4's data members
    
    // We now have four different Date objects with three pieces of data each, so display them
    date1.displayDate(date1.getDay(), date1.getMonth(), date1.getYear());
    date2.displayDate(date2.getDay(), date2.getMonth(), date2.getYear());
    date3.displayDate(date3.getDay(), date3.getMonth(), date3.getYear());
    date4.displayDate(date4.getDay(), date4.getMonth(), date4.getYear());
    
    return 0;
}
