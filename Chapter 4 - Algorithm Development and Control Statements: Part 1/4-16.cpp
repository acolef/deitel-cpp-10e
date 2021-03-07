/* A program that determines the gross pay for each of several
 * employees. For work done in excess of 40 hours, time-and-a-
 * half will be applied to that employee's salary.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>

using namespace std;


int main() {
    int hours;  
    double hRate, salary;
    
    cout << "Enter hours worked (-1 to end): "; cin >> hours;
    
    while (hours != -1) {                                           // Signal value of -1
        cout << "Enter hourly rate of the employee ($00.00): "; cin >> hRate;
        
        if (hours > 40) {   
            salary = hRate * 40 + (hours - 40) * hRate * 1.5;       // Compiler will promote int to double
        }
        else {
            if (hours <= 40) {                                      
                salary = hRate * hours;                             // Compiler will promote int to double
            }
        }
        
        cout << "Salary is $" << salary;
        cout << "\nEnter hours worked (-1 to end): "; cin >> hours;
    }
    
    return 0;
}
