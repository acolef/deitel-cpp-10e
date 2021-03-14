/* Determines whether an integer is a multiple of a certain input.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

bool isMultiple (const int, const int);     // Function prototype 

int main() {
    int num1, num2;
    cout << "Input two integers: ";     cin >> num1 >> num2;
    cout << boolalpha << isMultiple(num1, num2) << endl;
}

bool isMultiple (const int num1, const int num2) {
        return num2 % num1 == 0;
}
