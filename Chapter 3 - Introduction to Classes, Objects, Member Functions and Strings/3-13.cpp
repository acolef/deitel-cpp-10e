/* Displaying and updating Account balances
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include "AccountDepWit.h"

using namespace std;

void displayAccount(Account accountToDisplay){
    cout << "\n\n" << accountToDisplay.getName() << "'s balance is $" << accountToDisplay.getBalance() << endl;
}

int main(){
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};
    
    displayAccount(account1);
    displayAccount(account2);
    
    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "Adding $" << depositAmount << " to account1's balance";
    account1.deposit(depositAmount);
    
    displayAccount(account1);
    displayAccount(account2);
    
    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "Adding " << depositAmount << " to account2's balance";
    account2.deposit(depositAmount);
    
    displayAccount(account1);
    displayAccount(account2);
    
    cout << "\n\nEnter withdrawal amount for account1: ";
    int withdrawalAmount;
    cin >> withdrawalAmount;
    cout << "Withdrawing $" << withdrawalAmount << " from account1's balance";
    account1.withdraw(withdrawalAmount);
    
    displayAccount(account1);
    displayAccount(account2);
    
    cout << "\n\nEnter withdrawal amount for account2: ";
    cin >> withdrawalAmount;
    cout << "Withdrawing $" << withdrawalAmount << " from account2's balance";
    account2.withdraw(withdrawalAmount);
    
    displayAccount(account1);
    displayAccount(account2);
}
