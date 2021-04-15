/* Simulates the rolling of two dice 36,000,000 times and stores
 * the results in a one-dimensional array to track the number of 
 * occurrences for each outcome. The dice are six-sided.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::array;
using std::default_random_engine;
using std::uniform_int_distribution;

// function prototypes for the rolling and for tabulating results
void roll(array<int, 13>&, const int);
void pTable(array<int, 13>&, const int);

const size_t arraySize{13};

int main() {
    const int numRolls{36'000'000};
    array<int, arraySize> frequency{};
    
    // function calls for the rolling and tabulation
    roll(frequency, numRolls);
    pTable(frequency, numRolls);
}

void roll(array<int, arraySize>& diceRolls, const int numRolls) {
    // statements for the random number mechanisms from C++11
    default_random_engine engine(static_cast<int>(time(0)));    // seeds the engine with the time
    uniform_int_distribution<unsigned int> die1(1, 6);          // two different distributions for the die
    uniform_int_distribution<unsigned int> die2(1, 6);
    
    // perform the dice rolls using the default random engine
    // and a uniform integer distribution
    for ( unsigned int i{1}; i <= numRolls; i++ ) {            
        ++diceRolls[die1(engine) + die2(engine)];
    }
}

void pTable(array<int, arraySize>& rollResults, const int numRolls) {
    // the number of ways one can roll a total
    array<int, arraySize> expected = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    
    // print table headings
    cout << setw (10) << "Total" << setw(10) << "Frequency"
        << setw(10) << "Expected" << setw(10) << "Actual" << endl;
    
    cout << std::setprecision(3) << std::fixed;
        
    // compute the table values
    for ( size_t i{2}; i < arraySize; i++ ) {
        cout << setw(10) << i << setw(10) << rollResults[i] 
            << setw(9) << (100 * static_cast<double>(expected[i]) / 36) << "%" 
            << setw(9) << (100 * static_cast<double>(rollResults[i]) / numRolls) << "%"
            << endl;
    }
}
