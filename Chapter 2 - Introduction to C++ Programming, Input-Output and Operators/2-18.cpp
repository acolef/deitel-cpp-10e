/*Prompts the user for two numbers, then compares them.
*/

#include <iostream>
using namespace std;

int main(){
    int first{0}, second{0};            //Declare and initialize to 0 the variables
                                        //for storing the inputs
    cout << "Input two numbers: ";
    cin >> first >> second;
    
    if (first > second){
        cout << first << " is larger.\n";
    }
    
    if (second > first){
        cout << second << " is larger.\n";
    }
    
    if (first == second){
        cout << "These numbers are equal.\n";
    }
    
    return 0;
}
