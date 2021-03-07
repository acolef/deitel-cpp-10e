/* This program asks for two numbers and then prints their
sum, product, difference, and quotient.
 *
 * Author: Alex Cole Foster
 */

#include <iostream>                     //Pre-processor directive to include standard stream header
using namespace std;

int main(){
    int first{0}, second{0};            //Declare and initialize two variables for input storage
    int sum{0}, product{0},             //Declare and initialize the variables for storing the
    difference{0}, quotient{0},         //arithmetic operation values
    remainder{0};
    
    cout << "Enter two numbers: ";      //Prompt user for the inputs
    cin >> first >> second;             //Accept inputs from the keyboard
    
    sum = first + second;               //Relevant arithmetic
    product = first * second;
    difference = first - second;
    quotient = first / second;
    remainder = first % second;
    
    cout << "The sum of " << first << " and " << second << " is " << sum << endl;
    cout << "The product of " << first << " and " << second << " is " << product << endl;
    cout << "The difference of " << first << " and " << second << " is " << difference << endl;
    cout << "The quotient of " << first << " and " << second << " is " << quotient << 
    " with a remainder of " << remainder << endl;
    
    return 0;
}
//The remainder was not asked for in the problem. It was done as extra practice using %.
