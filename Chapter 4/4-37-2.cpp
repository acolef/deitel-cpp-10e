/* A four-digit number decryption program based on 4-37.cpp.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int input, first, second, third, fourth, sto, decrypted;
    
    cout << "Input a 4-digit integer: ";    cin >> input;
    // Separation of the digits
    first = input / 1000 + 3;           // The original number is obtained by adding 3 to the individual digits
    second = input % 1000 / 100 + 3;    // Single out the 2nd digit and add 3
    third = input % 100 / 10 + 3;       // Single out the 3rd digit and add 3
    fourth = input % 10 + 3;            // Single out the 4th digit and add 3
    
    sto = first;                        // The usual swapping method from 4-37.cpp
    first = third * 1000;
    third = sto * 10;
    sto = second;
    second = fourth * 100;
    fourth = sto;
    
    decrypted = first + second + third + fourth;
    cout << "The decrypted number is " << decrypted << endl;
}
