/* A HeartRates class 
 * 
 * Author: Alex Cole Foster
 */

#include <string>

class HeartRates{
public:
    HeartRates(std::string first, std::string last, int day, int month, int year) {
        setFirstName(first);
        setLastName(last);
        setBirthDay(day);
        setBirthMonth(month);
        setBirthYear(year);
    }
    
    // A function that returns a person's age in years
    int calcAge(int curDay, int curMonth, int curYear){
        int age{curYear - birthYear};       // Declare and initialize age
        
        if (curMonth < birthMonth) {        // If it's not the user's birth month...
            age = age - 1;                  // then the user is a year younger than curYear - birthYear
        }
        if (curMonth == birthMonth) {
            if (curDay < birthDay) {        // Likewise, if it's not their birth day...
                age = age - 1;              // they're still a year younger than curYear - birthYear
            }
        }
        
        return age;                         // Return the value in age to calling function
    }
    
    int maxHeartRate(int curDay, int curMonth, int curYear){
        return 220 - calcAge(curDay, curMonth, curYear);        // Call function calcAge and subtract its result
    }                                                           // from 220, per AHA guidelines
    
    void targetHeartRate(int curDay, int curMonth, int curYear){
        std::cout << "\nTarget heart rate: " << maxHeartRate(curDay, curMonth, curYear) * 0.50 << " - " << maxHeartRate(curDay, curMonth, curYear) * 0.85;
    }
    
    // Set functions for the data members/attributes
    void setFirstName(std::string first){
        firstName = first;
    }
    
    void setLastName(std::string last){
        lastName = last;
    }
    
    void setBirthDay(int day){
        birthDay = day;
    }
    
    void setBirthMonth(int month){
        birthMonth = month;
    }
    
    void setBirthYear(int year){
        birthYear = year;
    }
    
    // Get functions for the data members/attributes
    std::string getFirstName(){
        return firstName;
    }
    
    std::string getLastName(){
        return lastName;
    }
    
    int getBirthDay(){
        return birthDay;
    }
    
    int getBirthMonth(){
        return birthMonth;
    }
    
    int getBirthYear(){
        return birthYear;
    }
    
private:
    std::string firstName;
    std::string lastName;
    int birthDay;
    int birthMonth;
    int birthYear;
};
