/* An encryption program that encrypts a four-digit integer.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int input, first, second, third, fourth, sto, encrypted;
        
    cout << "Input a 4-digit integer: ";    cin >> input;
    // Separation of the digits
    first = (input / 1000 + 7) % 10;
    second = (input % 1000 / 100 + 7) % 10;
    third = (input % 1000 % 100 / 10 + 7) % 10;
    fourth = (input % 1000 % 100 % 10 / 1 + 7) % 10;
        
    sto = first;            // Store first's value 
    first = third * 1000;   // New first digit is third digit 
    third = sto * 10;       // New third digit is old first digit
    sto = second;           // Store second's value
    second = fourth * 100;  // New second digit is fourth digit
    fourth = sto;           // New fourth digit is old second digit
        
    encrypted = first + second + third + fourth;
    cout << "Number with encryption: " << encrypted << endl;
}
