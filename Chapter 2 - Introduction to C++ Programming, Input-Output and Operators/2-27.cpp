/* Prints the character set integer equivalent of a character typed
 * in by the user.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    char input{0};
    
    cout << "Input a character: ";      cin >> input;   //Prompt user to input a character and store it in variable 'input'
    cout << "The ASCII character set equivalent is: " << static_cast<int>(input) << endl; //Convert that character
                                                                                          //to ASCII
    return 0;
}
