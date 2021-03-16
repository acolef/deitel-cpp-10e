#include <iostream>
using namespace std;

void reverse(int);                                  // Function prototype for reverse

int main() {
    int num;
    
    cout << "Enter a number: ";     cin >> num;
    reverse(num);
}

void reverse(int num) {                             // reverse function definition
    while ( num >= 1 ) {
        cout << num % 10;                           // Print the remainder of num / 10 (the rightmost digit)
        num /= 10;                                  // Divide by 10 to eliminate the rightmost digit
    }
    
    cout << "\n";
}
