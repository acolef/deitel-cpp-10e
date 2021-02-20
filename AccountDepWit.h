/* An Account class with name and balance data members, and a 
 * constructor and deposit function that each perform validation.
 * 
 * Author: Alex Cole Foster
 */

#include <string>

class Account{
public:
    Account(std::string accountName, int initialBalance)
        : name{accountName} {               // name{accountName} initializes name to accountName, { begins constructor's body
        
        if (initialBalance > 0) {           // Validate that the initial balance is > 0; otherwise, data member balance
            balance = initialBalance;       // will keep its initial value of 0, initialized below in data member section
        }
    }   // End constructor body
        
    // Function that deposits only a valid amount to the balance
    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
        }
    }
    
    void withdraw(int withdrawalAmount) {    // Function for withdrawing from an account
        if (withdrawalAmount <= balance) {   // If the withdrawal is smaller than the balance...
            balance = balance - withdrawalAmount;   // Update the balance in the Account object
        }
        if (withdrawalAmount > balance) {   // But if the withdrawal is larger than the Account object's balance...
            std::cout << "\n\nWithdrawal amount exceeded account balance.";  // Print this message and do nothing else
        }
    }
    // Function that returns the account balance
    int getBalance() const {
        return balance;
    }
        
    // Function that sets the name
    void setName(std::string accountName) {
        name = accountName;
    }
        
    // Function that returns the name
    std::string getName() const {
        return name;
    }
private:
    std::string name;   // Account name data member
    int balance{0};     // Data member with default initial value of 0
};
