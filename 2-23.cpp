/* Reads five integers from input and determines the smallest and largest
 * of them. This program circumvents going through the permutations of 
 * five objects.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int first{0}, second{0}, third{0}, fourth{0}, fifth{0}; //Declare and initialize all variables to 0
    int smallest{0}, biggest{0};
    
    cout << "Input five different integers: ";              //Prompt user for inputs
    cin >> first >> second >> third >> fourth >> fifth;     //Accept inputs
    
    first = smallest;   first = biggest;                    //Give first value to 'smallest' and 'biggest', for now
    
    //smallest checks
    if (second < smallest){     //If 'second' is less than 'first'...
        smallest = second;      //the variable 'smallest' takes the 'second' value
    }
    if (third < smallest){      //If 'third' is less than the value in 'smallest'...
        smallest = third;       //the variable 'biggest' takes the 'third' value, and so on.
    }
    if (fourth < smallest){
        smallest = fourth;
    }
    if (fifth < smallest){
        smallest = fifth;
    }
    
    //largest checks
    if (second > biggest){
        biggest = second;
    }
    if (third > biggest){
        biggest = third;
    }
    if (fourth > biggest){
        biggest = fourth;
    }
    if (fifth > biggest){
        biggest = fifth;
    }
    
    cout << "The smallest is " << smallest << endl;     //Output the results 
    cout << "The biggest is " << biggest << endl;
    
    return 0;
}
