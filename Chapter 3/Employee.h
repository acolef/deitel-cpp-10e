/* An Employee class containing three data members, a constructor, set and
 * get functions per data member, and validity checking for the salaries.
 * 
 * Author: Alex Cole Foster
 */

#include <string>

class Employee{
public:
    Employee(std::string first, std::string last, int monthlyPay)
    : firstName{first}, lastName{last} {
    
        if (monthlyPay > 0) {       // If monthlyPay is positive... 
            salary = monthlyPay;    // then set the salary equal to monthlyPay's value; otherwise, salary stays 0, acc. to its initialization
        }
    }
    
    // Set functions for the class's data members
    void setFirstName(std::string first) {
        firstName = first;
    }
    
    void setLastName(std::string last) {
        lastName = last;
    }
    
    void setSalary(int monthlyPay) {    // If you're going to have custom inputs, you should add validity checking to this member function
        salary = monthlyPay;
    }
    
    // A function for giving a 10% raise to employees 
    void giveRaise(int monthlyPay) {
        salary = monthlyPay / 10 + monthlyPay;
    }
    
    // Get functions for the class's data members
    std::string getFirstName() const {
        return firstName;
    }
    
    std::string getLastName() const {
        return lastName;
    }
    
    int getSalary() const {
        return salary;
    }
    
    int getYearlySalary() const {
        return 12 * salary;
    }
    
private:
    std::string firstName;
    std::string lastName;
    int salary{0};
};
