/* A Date class containing the month, day, and year as data members,
 * a constructor, and set and get functions per data member.
 * 
 * Author: Alex Cole Foster
 */

#include <string>

class Date{
public:
    Date(int day, int month, int year)
    : dayD{day}, monthD{month}, yearD{year} {
        if (monthD < 1) {       // Validity checks for the month: it needs to be 1-12
            monthD = 1;
        }
        
        if (monthD > 12) {
            monthD = 1;
        }
    }
    
    // Set member functions
    void setDay(int day) {
        dayD = day;             // We will accept any day
    }
    
    void setMonth(int month) {
        monthD = month;         // Validity checks for month input: it also needs to be 1-12
        if (monthD < 1) {
            monthD = 1;
        }
        
        if (monthD > 12) {
            monthD = 1;
        }
    }
    
    void setYear(int year) {
        yearD = year;           // We will accept any year
    }
    
    //Get member functions
    int getDay() const {
        return dayD;
    }
    
    int getMonth() const {
        return monthD;
    }
    
    int getYear() const {
        return yearD;
    }
    
    void displayDate(int day, int month, int year) const {              // Function to display the date based on the data member values
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
    
private:             // Data members for day, month, and year
    int dayD;
    int monthD;
    int yearD;
};
