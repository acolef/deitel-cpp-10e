/* This program finds the two largest numbers in a list of 10 numbers
 * of units sold by a salesperson. A while loop is used to facilitate
 * this process. See 4-17.cpp for more complete comments.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>

using namespace std;

int main(){
    unsigned int counter{1}, number, largest{0}, secLargest{0};
                                                    
    while (counter <= 10) {
        cout << "Input the number of units sold: "; cin >> number;
        
        if (number > largest) {                     
            largest = number;                       
        }
        
        if (number > secLargest) {              // If an input is greater than the value in secLargest...
            if (number < largest) {             // AND that input is less than the current largest input...
                secLargest = number;            // then this input must be the second largest one
            }
        }
        
        ++counter;                                  
    }                                               
                                                    
    cout << "The most amount of sales was " << largest << endl;    
    cout << "The second most amount of sales was " << secLargest << endl;
}
