/* Reads 20 numbers, 10-100 inclusive, stores non-duplicate numbers
 * in an array, and then prints the contents of the array.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>

using std::cout;
using std::cin;
using std::endl;
using std::array;

int main() {
    int index{0}, input; 
    const size_t arraySize{20};
    array<int, arraySize> numbers{};
    
    for ( size_t i{0}; i < numbers.size(); i++ ) {
        bool dupe{0};
        cout << "Input a number 10-100, inclusive: ";
        cin >> input;
        
        // input validation
        while ( input < 10 || input > 100 ) {
            cout << "\nInvalid entry!";
            cout << "\nInput a number 10-100, inclusive: ";
            cin >> input;
        }
        
        // scans the indices to see if the input is a duplicate value
        for ( size_t j{0}; j < index; j++ ) {
            if ( input == numbers[j] ) {
                dupe = 1;
                break;
            }
        }
            
        // if dupe is NOT true, execute the if statement's body
        if ( !dupe ) {
            numbers[index++] = input;
            
        }
    }
    
    // only prints non-zero elements of the array
    cout << "\nThe unique elements are: ";
    for ( size_t i{0}; numbers[i] != 0; i++ ) {
        cout << numbers[i] << " ";
    }
    
    cout << endl;
}
