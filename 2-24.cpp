/* Determines whether an integer input is odd or even.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int input{0};
    
    cout << "Input an integer: ";       cin >> input;   //Prompt user for and accept input of integer
    
    if (input % 2 == 1){                                //If input/2 has a remainder of 1, input is odd
        cout << input << " is odd.\n";
    }
    if (input % 2 == 0){                                //If input/2 has a remainder of 0, input is even
        cout << input << " is even.\n";
    }
    
    return 0;
}
