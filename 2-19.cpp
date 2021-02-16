/* This program takes a long, inelegant approach to determining the
 * minimum and maximum of three different integers. In 2-21 we solve
 * this problem with a smarter approach that avoids having to 
 * permutate five objects.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>                                 //Pre-processor directive to use the standard stream library header
using namespace std;                                //Keeps us from having to type std:: before cout, cin, and endl.

int main(){
    int first{0}, second{0}, third{0},              //Declare and initialize all relevant variables to 0
    sum{0}, product{0}, average{0},
    max{0}, min{0};
    
    cout << "Input three different integers: ";     //Prompt user for inputs
    cin >> first >> second >> third;                //Accept three inputs from the keyboard
    
    sum = first + second + third;                   //Relevant arithmetic
    product = first * second * third;
    average = sum / 3;
    
    cout << "The sum is " << sum << endl;           //Print arithmetic results
    cout << "The average is " << average << endl;
    cout << "The product is " << product << endl;
    
    if (first < second){                            //Number value checks; 3! = 6 permutations 
        if (second < third){    
            min = first;
            max = third;
        }
        if (third < second){    
            min = first;
            max = second;
        }
        if (third < first){
            min = third;
            max = second;
        }
    }
    if (second < first){
        if (first < third){
            min = second;
            max = third;
        }
        if (third < first){
            min = second;
            max = first;
        }
        if (third < second){
            min = third;
            max = first;
        }
    }
    
    cout << "Smallest is " << min << endl;          //Print the results of size checks
    cout << "Biggest is " << max << endl;
    
    return 0;
}
