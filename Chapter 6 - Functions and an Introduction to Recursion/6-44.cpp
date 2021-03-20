/* Prints x * y with a recursive function. A modification of
 * the program in problem 6.43.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <cmath>
using namespace std;

int mystery(int, int);

int main() {
    cout << "Enter two integers: ";
    int x{0};
    int y{0};
    cin >> x >> y;
    cout << "The result is " << mystery(x, y) << endl;
}

int mystery(int a, int b) {
    if (1 == b) {
        return a;
    }
    else if (-1 == b) {
        return -a;
    }
    else if ( b < 0 ) {
        return -a + mystery(a, b+1);
    }
    else {
        return a + mystery(a, b-1);
    }
}
