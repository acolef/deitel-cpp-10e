/* Uses a function template to determine the larger of two
 * input values. Assumes two unique input values.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T>                   // Template uses typename T
T maximum(T arg1, T arg2) {             // T stands for a fundamental type or user-defined type
    if (arg1 > arg2)                    
        return arg1;                    // Return arg1 if it's greater
    else
        return arg2;                    // If arg1 isn't greater, it's lower
}

int main() {
    int i1, i2;
    double d1, d2;
    char c1, c2;
    
    cout << "Input two different integers: ";   cin >> i1 >> i2;
    cout << "The maximum is: " << maximum(i1, i2)
        << "\nInput two different floating-point numbers: ";    cin >> d1 >> d2;
    cout << "The maximum is: " << maximum(d1, d2)
        << "\nInput two different characters: ";    cin >> c1 >> c2;
    cout << "The maximum is: " << maximum(c1, c2) << endl;
}
