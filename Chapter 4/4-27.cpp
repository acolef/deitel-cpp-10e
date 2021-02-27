/* This program determines if an entered 5-digit integer is a palindrome.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    unsigned int input, first, second, fourth, fifth;
    
    cout << "Enter a 5-digit integer: ";    cin >> input;
    // The parentheses aren't necessary
    first = input / 10000;                                          // Picks out the ten-thousands digit
    second = (input % 10000) / 1000;                                // Picks out the thousands digit
    fourth = (((input % 10000) % 1000) % 100) / 10;                 // Picks out the tens digit
    fifth = ((((input % 10000) % 1000) % 100) % 10) / 1;            // Picks out the ones digit
    
    if (first == fifth) {                                           // If the ten-thousands and ones digits are the same...
        if (second == fourth) {                                     // then check the thousands and tens digits!
            cout << input << " is a palindrome.\n";
        }
        else {                                                      // if thousands digit != tens digit...
            cout << input << " is NOT a palindrome.\n";             // it's not a palindrome
        }
    }
    else {                                                          // if ten-thousands digit != ones digit...
        cout << input << " is NOT a palindrome.\n";                 // it's not a palindrome
    }
}
