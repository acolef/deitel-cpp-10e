/* Repeats problem 7-13, but uses a vector instead of an array.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    int index{0}, input;
    const int numAmount{20};
    size_t vectorSize{0};               // note the vector size is 0; it will expand as we use push_back
    vector<int> numbers(vectorSize);
    
    for ( size_t i{0}; i < numAmount; i++ ) {
        bool dupe{false};
        
        cout << "Input a number 10-100 inclusive: ";
        cin >> input;
        
        while ( input < 10 || input > 100 ) {
            cout << "\nInvalid entry!";
            cout << "\nInput a number 10-100 inclusive: ";
            cin >> input;
        }
        
        for ( size_t j{0}; j < index; j++ ) {
            if ( numbers[j] == input ) {
                dupe = true;
                break;
            }
        }
        
        // use the push_back function to append the input to the
        // end of the vector
        if ( !dupe ) 
            numbers.push_back(input);
        
        index++;
    }
    
    cout << "The unique elements are: ";
    for ( size_t i{0}; i < numbers.size(); i++ ) {
        cout << numbers[i] << " ";
    }
    
    cout << endl;
}
