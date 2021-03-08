/* Prints "The Twelve Days of Christmas" song by way of switch
 * statements.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main() {
    for ( unsigned int day{1} ; day <= 12 ; day++ ) {
        cout << "\n\nOn the ";
        switch ( day ) {
            case 1:
                cout << "first";
                break;
            case 2:
                cout << "second";
                break;
            case 3:
                cout << "third";
                break;
            case 4:
                cout << "fourth";
                break;
            case 5:
                cout << "fifth";
                break;
            case 6:
                cout << "sixth";
                break;
            case 7:
                cout << "seventh";
                break;
            case 8:
                cout << "eighth";
                break;
            case 9:
                cout << "ninth";
                break;
            case 10:
                cout << "tenth";
                break;
            case 11:
                cout << "eleventh";
                break;
            case 12:
                cout << "twelfth";
                break;
        }
        
        cout << " day of Christmas, my true love sent to me: ";
        
        switch ( day ) {                                // These are "backwards" and without breaks so that
            case 12:                                    // the lyrics will repeat appropriately
                cout << "\nTwelve drummers drumming";
            case 11:
                cout << "\nEleven pipers piping";
            case 10:
                cout << "\nTen lords a-leaping";
            case 9:
                cout << "\nNine ladies dancing";
            case 8:
                cout << "\nEight maids a-milking";
            case 7:
                cout << "\nSeven swans a-swimming";
            case 6:
                cout << "\nSix geese a-laying";
            case 5:
                cout << "\nFive gold rings";
            case 4:
                cout << "\nFour calling birds";
            case 3:
                cout << "\nThree French hens";
            case 2:
                cout << "\nTwo turtle doves";
            case 1:
                cout << "\nA partridge in a pear tree.\n";
        }
    }
}
