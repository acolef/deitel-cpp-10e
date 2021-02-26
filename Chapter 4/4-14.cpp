/* A program designed to test out definite iteration loops.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream> 
#include <iomanip>      // Needed for parameterized stream manipulator "setprecision()"

using namespace std;

int main() {
    unsigned int acctNum;
    double initBal, totalCharge, totalCredit, allowCredit, balance;
    
    cout << setprecision(2) << fixed;       // Display numbers to 2 decimal points and NOT in scientific notation
    
    cout << "Enter account number (or -1 to quit): ";   cin >> acctNum; // Prompt and accept # to begin loop
    
    while (acctNum != -1) {
        cout << "Enter beginning balance: ";    cin >> initBal;     // Four inputs 
        cout << "Enter total charges: ";        cin >> totalCharge;
        cout << "Enter total credits: ";        cin >> totalCredit;
        cout << "Enter credit limit: ";         cin >> allowCredit;
        
        balance = initBal + totalCharge - totalCredit;              // Compute the new balance...
        cout << "New balance is " << balance << endl;               // And display the new balance
        
        if (balance > allowCredit) {                                // If the balance exceeds the credit limit...
            
            cout << "\nAccount:\t" << acctNum                       // Print this message
            << "\nCredit limit:\t" << allowCredit
            << "\nBalance:\t" << balance
            << "\nCredit Limit Exceeded.\n";
            
        }
        
        cout << "\nEnter account number (or -1 to quit): "; cin >> acctNum; // Otherwise, continue onto the 
    }                                                                       // next account
    
    return 0;
}
