/* A program designed to test the capabilities of the Employee class. 
 * It will display the full names of employees along with their monthly
 * and yearly salaries, and will also display their salaries following
 * a 10% raise.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main(){
    Employee john{"John", "Doe", -4500};
    Employee jane{"Jane", "Doe", 5000};
    Employee custom1{"", "", 0};
    
    // Variables needed to pass values to custom1 object's parameters
    string first, last;
    int monthlyPay;
    
    // Custom employee input
    cout << "Input employee's first name: ";      
    getline(cin, first);
    cout << "Input employee's last name: ";    
    getline(cin, last);
    cout << "Input employee's monthly salary: ";
    cin >> monthlyPay;
    
    // Store all the inputs for the "custom" employee
    custom1.setFirstName(first);
    custom1.setLastName(last);
    custom1.setSalary(monthlyPay);
    
    // Display the employee salary records
    cout << "\nEMPLOYEE SALARY RECORDS\n";
    cout << "First\tLast\tMonthly\tYearly\n";
    cout << john.getFirstName() << "\t" << john.getLastName() << "\t" << john.getSalary() << "\t" << john.getYearlySalary() << endl;
    cout << jane.getFirstName() << "\t" << jane.getLastName() << "\t" << jane.getSalary() << "\t" << jane.getYearlySalary() << endl;
    cout << custom1.getFirstName() << "\t" << custom1.getLastName() << "\t" << custom1.getSalary() << "\t" << custom1.getYearlySalary() << endl;
    
    // Apply the 10% raise
    cout << "\nApplying 10% raises...";
    john.giveRaise(john.getSalary());
    jane.giveRaise(jane.getSalary());
    custom1.giveRaise(custom1.getSalary());
    
    //Re-display records with raises applied
    cout << "\n\nEMPLOYEE SALARY RECORDS\n";
    cout << "First\tLast\tMonthly\tYearly\n";
    cout << john.getFirstName() << "\t" << john.getLastName() << "\t" << john.getSalary() << "\t" << john.getYearlySalary() << endl;
    cout << jane.getFirstName() << "\t" << jane.getLastName() << "\t" << jane.getSalary() << "\t" << jane.getYearlySalary() << endl;
    cout << custom1.getFirstName() << "\t" << custom1.getLastName() << "\t" << custom1.getSalary() << "\t" << custom1.getYearlySalary() << endl;
    
    return 0;
}
