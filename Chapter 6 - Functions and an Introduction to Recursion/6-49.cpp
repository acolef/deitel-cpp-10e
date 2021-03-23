/* Triples a variable defined in main using pass-by-value
 * and pass-by-reference.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int tripleByValue(int);
int tripleByReference(int&);

int main() {
    int count{3};
    
    cout << tripleByValue(count) << endl;
    cout << "count is: " << count << endl;
    cout << tripleByReference(count) << endl;
    cout << "count is: " << count << endl;
}

int tripleByValue(int count) {
    count *= 3;                             // Doesn't modify count's original value in main
    return count;
}

int tripleByReference(int& count) {         // Is passed count by a reference parameter count
    count *= 3;                             // Actually triples count in main
    return count;
}
