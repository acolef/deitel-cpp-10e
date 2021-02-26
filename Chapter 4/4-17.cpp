/* This program finds the largest number in a list of 10 numbers
 * of units sold by a salesperson. A while loop is used to facilitate
 * this process.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>

using namespace std;

int main(){
    unsigned int counter{1}, number, largest{0};    // No need to initialize number, it will be input soon
                                                    // largest starts at 0
    while (counter <= 10) {
        cout << "Input the number of units sold: "; cin >> number;
        
        if (number > largest) {                     // If the input is greater than largest...
            largest = number;                       // update largest with that input's value
        }
        
        ++counter;                                  // (pre)increment counter; it doesn't matter if we pre or 
    }                                               // postincrement counter, as it doesn't appear as part of a
                                                    // larger expression here
    cout << "The most amount of sales was " << largest << endl;     // print the value stored in largest
}
