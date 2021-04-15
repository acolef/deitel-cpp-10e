/* Determines the amount of salespeople that earned salaries
 * in one of the given ranges, and then prints a bar chart
 * displaying this information.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip> 
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::array;
using std::fixed;
using std::showpoint;

int main() {
    // Specify size of the array and declare/define the array that stores
    // the frequency values for the amounts earned
    const size_t arraySize{11};     
    array<unsigned int, arraySize> frequency{};

    // Double variable to store the sales for an employee, a
    // double variable to store the commission, and a double
    // variable to store the total pay
    double sales, c{0.09}, totalPay;
    
    cout << fixed << showpoint;
    cout << "Enter the employee's sales (-1 to quit): $";
    cin >> sales;
    
    // Enter the sales and increment frequency at the proper index
    while ( sales != -1 ) {
        totalPay = 200 + sales * c;
        cout << setprecision(2) << "Total pay: " << totalPay << endl;
        
        int index = static_cast<int>(totalPay) / 100;
        ++frequency[index < 10 ? index : 10];
        
        cout << "\nEnter the employee's sales (-1 to quit): $";
        cin >> sales;
    }
    
    // Display the results
    for ( size_t i{2}; i < frequency.size(); i++ ) {
        if ( i < 10 ) {
            cout << "$" << i << "00 - $" << i << "99: " << frequency[i] << endl;
        }
        else {
            cout << "$1000+: " << frequency[i] << endl;
        }
    }
}
