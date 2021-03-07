/* This program displays a checkerboard pattern using eight output
 * statements, then using only one output statement.
 * 
 * Author: Alex Cole Foster
 */
#include <iostream>
using namespace std;

int main(){
    
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    cout << "* * * * * * * *\n";
    cout << " * * * * * * * *\n";
    
    cout << "----------------\n";       //Used to separate the two checkerboards
    
    cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n";
    
    return 0;
}
