/* Recreates fig. 7.12 in the Deitel text, using arrays instead of
 * vectors. Strictly speaking we should not use the compareArrays
 * function, probably; however, I do so for practice.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>
#include <stdexcept>
using namespace std;

// constant global variables for the array sizes
const size_t array1Size{7};
const size_t array2Size{10};

void outputArray1(const array<int, array1Size>&);
void outputArray2(const array<int, array2Size>&);

void inputArray1(array<int, array1Size>&);
void inputArray2(array<int, array2Size>&);

bool compareArrays(const array<int, array1Size>&, const array<int, array2Size>&);

int main() {
    array<int, array1Size> integers1{};
    array<int, array2Size> integers2{};

    // print integers1 size and contents
    cout << "Size of array integers1 is " << integers1.size()
        << "\nArray after initialization: ";
    outputArray1(integers1);
    
    // print integers2 size and contents
    cout << "Size of array integers2 is " << integers2.size()
        << "\nArray after initialization: ";
    outputArray2(integers2);
    
    // input and print integers1 and integers2
    cout << "\nEnter 17 integers: " << endl;
    inputArray1(integers1);
    inputArray2(integers2);
    
    cout << "\nAfter input, the arrays contain:\n"
        << "integers1: ";
    outputArray1(integers1);
    cout << "integers2: ";
    outputArray2(integers2);
    
    // use inequality (!=) operator with array objects
    cout << "\nComparing arrays" << endl;
    if ( compareArrays(integers1, integers2) == false ) 
        cout << "integers1 and integers2 are not equal";
    else 
        cout << "integers1 and integers2 are equal";
    
    // create array integers3 using integers1 as an
    // initializer; print size and contents
    array<int, array1Size> integers3{integers1};
    
    cout << "\nSize of array integers3 is " << integers3.size()
        << "\nArray after initialization: ";
    outputArray1(integers3);
    
    // use square brackets to use the value at location 5 as an rvalue
    cout << "\nintegers1[5] is " << integers1[5];
    
    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: ";
    outputArray1(integers1);
    
    // attempt to use out-of-range subscript
    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl; // ERROR: out of range
    }
    catch (out_of_range& ex) {
        cerr << "An exception occurred: " << ex.what() << endl;
    }
    
}

void outputArray1(const array<int, array1Size>& items) {
    for ( int item : items ) {
        cout << item << " ";
    }
    
    cout << endl;
}

void outputArray2(const array<int, array2Size>& items) {
    for ( int item : items ) {
        cout << item << " ";
    }
    
    cout << endl;
}

void inputArray1(array<int, array1Size>& items) {
    for ( int& item : items ) {
        cin >> item;
    }
}

void inputArray2(array<int, array2Size>& items) {
    for ( int& item : items ) {
        cin >> item;
    }
}

bool compareArrays(const array<int, array1Size>& first, const array<int, array2Size>& second) {
    if ( first.size() != second.size() )
        return false;
    for ( size_t i{0}; i < array1Size; i++ ) {
        if ( first[i] != second[i] )
            return false;
    }
    
    return true;
}
