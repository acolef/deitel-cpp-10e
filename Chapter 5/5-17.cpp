/* Determines the retail prices of various products.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int productNumber, quantity;
    double price{0.0};
    
    cout << setprecision(2) << fixed;
    cout << "Input product number (-1 to quit): ";   cin >> productNumber;
    while ( productNumber != -1) {
        cout << "Quantity: ";   cin >> quantity;
        switch ( productNumber ) { 
            case 1: 
                price += quantity * 2.98;
                break;
            case 2:
                price += quantity * 4.50;
                break;
            case 3: 
                price += quantity * 9.98;
                break;
            case 4:
                price += quantity * 4.49;
                break;
            case 5:
                price += quantity * 6.87;
                break;
            default:
                cout << "Invalid product number.\n";
        }
        
        cout << "Input product number (-1 to quit): ";  cin >> productNumber;
    }
    
    cout << "Total: $" << price << endl;
}
