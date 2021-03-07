/* A world population estimator program based on the 2020 world population
 * data hosted at https://www.worldometers.info/world-population/. I have 
 * elected to display actual years instead of years 1 - 75. According to
 * these data, and using the assumption that annual growth percentage will
 * remain constant, world population will double (~15.75 billion) sometime 
 * during 2087.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int year{2020}, counter{1};
    double growth{0.0105};
    long double pop{7794798739}, oldPop, annInc;
    
    cout << setprecision(0) << fixed;
    cout << "YEAR\tWORLD POP.\tANNUAL INCREASE\n";
    
    while ( counter <= 76 ) {
        oldPop = pop;
        pop += pop * growth;
        annInc = pop - oldPop;
        ++year;
        ++counter;
        
        cout << year << "\t" << pop << "\t" << annInc << endl;
    }
}
