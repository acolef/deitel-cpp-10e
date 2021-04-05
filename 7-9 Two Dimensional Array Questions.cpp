/* Answers some of the questions for 7.9.
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
using std::setw;

int main() {
    // 2 rows, 3 columns, 6 elements
    const size_t arrayRow{2}, arrayCol{3};
    array<array<int, arrayCol>, arrayRow> t{};
    
    /* All elements in row 1: t[1][0], t[1][1], t[1][2] 
       All elements in column 2: t[0][2], t[1][2] 
       */
    
    for (size_t row{0}; row < t.size(); row++) {            // nested counter-controlled for that initializes 
        for (size_t col{0}; col < t[row].size(); col++) {   // each element of t to 0
            t[row][col] = 0;
        }
    }
    
    // displays the labeled elements of t
    for (size_t row{0}; row < t.size(); row++) {            
        for (size_t col{0}; col < t[row].size(); col++) {
            cout << "t[" << row << "][" << col << "]: " << t[row][col] << " ";
        }
        
        cout << endl;
    }
    
    for (array<int, arrayCol>& row : t) {   // range-based for loop that declares an array-type range variable
        for (int& element : row) {          // another that loops through the rows of t
            element = 1;                    // set each element to 1 instead of 0 for testing purposes
        }
    }
    
    // re-display labeled elements of t
    cout << "\n";
    for (size_t row{0}; row < t.size(); row++) {            
        for (size_t col{0}; col < t[row].size(); col++) {
            cout << "t[" << row << "][" << col << "]: " << t[row][col] << " ";
        }
        
        cout << endl;
    }
    
    // keyboard input for the elements of t
    for (size_t row{0}; row < t.size(); row++) {
        for (size_t col{0}; col < t[row].size(); col++) {
            cout << "\nInput value for t[" << row << "][" << col << "]: ";
            cin >> t[row][col];
        }
    }
    
    // determines and displays the smallest value in array t
    int smallest{t[0][0]};  // Assume t[0][0] is the smallest for now
    
    for (array<int, arrayCol>& row : t) {
        for (int& element : row) {
            if (element < smallest)
                smallest = element;
        }
    }
    cout << "\nThe smallest value in t is " << smallest << endl;
    
    // prints all the elements in row 0
    cout << "The elements in row 0 are: ";
    for (size_t col{0}; col < t[0].size(); col++) {
        cout << t[0][col] << " ";
    }
    
    int total{0};
    
    // total elements in column 2
    cout << "\nThe total of the elements in column 2 is: ";
    for (size_t row{0}; row < t.size(); row++) {
        total += t[row][2];
    }
    cout << total << endl;
    
    // tabular output
    cout << setw(4) << "\n     [0]" << setw(4) << "[1]" << setw(4) << "[2]" << endl;
    for (size_t row{0}; row < t.size(); row++) {
        cout << "[" << row << "]";
        
        for (size_t col{0}; col < t[row].size(); col++) {
            cout << setw(4) << t[row][col];
        }
        cout << "\n";
    }
}
