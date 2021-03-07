/* A modification of the program in Fig. 4.14 of the Deitel text. This
 * program uses input validation to ensure the user enters a 1 or 2.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    unsigned int passes{0}, failures{0}, studentCounter{1};
    
    while (studentCounter <= 10) {
        cout << "Enter result (1=pass, 2=fail): ";
        int result;
        cin >> result;
        
        if (result == 1) {                                  // If result is 1...
            passes += 1;                                    // Add 1 to passes and...
            studentCounter++;                               // increment studentCounter by 1 ONLY if it's a pass
        }
        else {
            if (result == 2) {                              // likewise here we only increment the counter 
                failures += 1;                              // if it's a failure
                studentCounter++;
            }
            else {
                cout << "Please input a valid choice\n";    // if it's not a pass nor failure, DON'T increment!
            }
        }
    }
    
    cout << "Passed: " << passes << "\nFailed: " << failures << endl;
    
    if (passes > 8) {
        cout << "Bonus to instructor!" << endl;
    }
}
