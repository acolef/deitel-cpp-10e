/* Solves the Tower of Hanoi problem using recursion.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

void tower(int, int, int, int);

int main() {
    int num;
    
    cout << "Enter the number of disks: ";  cin >> num;
    tower(num, 1, 3, 2);
}

void tower(int numDisks, int initPeg, int tarPeg, int holdPeg) {
    if (numDisks > 0) {
        tower(numDisks - 1, initPeg, holdPeg, tarPeg);
        cout << initPeg << "->" << tarPeg << endl;
        tower(numDisks - 1, holdPeg, tarPeg, initPeg);
    }
}
