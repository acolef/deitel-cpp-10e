/* A program that keeps track of gross sales and computes the
 * salary per employee, using indefinite, sentinel-based loops.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double sales, earnings;
    
    cout << setprecision(2) << fixed;   // Display figures to 2 decimal places
    cout << "Enter sales in dollars (-1 to end): "; cin >> sales;   
    
    while (sales != -1) {                                                   // Start loop if input != -1
        earnings = 0.09 * sales + 200;
        cout << "Salary is: " << earnings;
        cout << "\nEnter sales in dollars (-1 to end): "; cin >> sales;
    }
    
    return 0;
}
