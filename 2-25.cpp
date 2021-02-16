/* Accepts two integer inputs and determines if the first
 * is a multiple of the second.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int num1{0}, num2{0};           //Declare and initialize our local variables for the inputs
    
    cout << "Please input two integers: ";      cin >> num1 >> num2;    //Prompt user for and accept inputs of the two integers
    
    if (num1 % num2 == 0){                                              //If there's no remainder from num1/num2, num1 is a multiple
        cout << num1 << " is a multiple of " << num2 << endl;           //of num2
    }
    
    if (num1 % num2 != 0){                                              //If there is a non-zero remainder from num1/num2, then num1
        cout << num1 << " is not a multiple of " << num2 << endl;       //is NOT a multiple of num2
    }
    
    return 0;
}
