/* This program reads five numbers between 1 and 30 and prints bars
 * of asterisks based on those numbers. One could implement checks 
 * to make sure that the numbers are between 1 and 30.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int first, second, third, fourth, fifth;
    
    cout << "Enter five numbers, 1-30: ";
    cin >> first >> second >> third >> fourth >> fifth;     // we need to store each input for later
    
    for ( unsigned int i{1}; i <= first; i++ ) {            // 5 for loops are used to print the asterisks
        cout << "*";
    }
    
    cout << "\n";                                           // newline character to separate the bars
    
    for ( unsigned int i{1}; i <= second; i++ ) {
        cout << "*";
    }
    
    cout << "\n";
    
    for ( unsigned int i{1}; i <= third; i++ ) {
        cout << "*";
    }
    
    cout << "\n";
    
    for ( unsigned int i{1}; i <= fourth; i++ ) {
        cout << "*";
    }
    
    cout << "\n";
    
    for ( unsigned int i{1}; i <= fifth; i++ ) {
        cout << "*";
    }
    
    cout << "\n";
}
