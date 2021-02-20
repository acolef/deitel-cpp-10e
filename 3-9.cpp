/* Displaying and updating Account balances
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include "AccountDepWit.h"

using namespace std;

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    cout << "account1: " << account1.getName() << "'s balance is " << account1.getBalance() << endl;
    cout << "account2: " << account2.getName() << "'s balance is " << account2.getBalance() << endl;
    
    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Adding $" << depositAmount << " to account1's balance";
    account1.deposit(depositAmount);
    
    cout << "\n\naccount1: " << account1.getName() << " balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();
    
    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account2's balance";
    account2.deposit(depositAmount);
    
    cout << "\naccount1: " << account1.getName() << "'s balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "'s balance is $" << account2.getBalance() << endl;
    
    cout << "\n\nEnter withdrawal amount for account1: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    cout << "Withdrawing $" << withdrawalAmount << " from account1's balance";
    account1.withdraw(withdrawalAmount);
    
    cout << "\n\naccount1: " << account1.getName() << "'s balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "'s balance is $" << account2.getBalance();
    
    cout << "\n\nEnter withdrawal amount for account2: ";
    cin >> withdrawalAmount;
    cout << "Withdrawing $" << withdrawalAmount << " from account2's balance";
    account2.withdraw(withdrawalAmount);
    
    cout << "\n\naccount1: " << account1.getName() << "'s balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "'s balance is $" << account2.getBalance() << endl;
}
