/* A modification of fig. 6.9 in the Deitel text. Makes various
 * adjustments to keep track of game statistics using arrays.
 * We see that the longer the game, one's chances of losing are
 * greater than their chances at winning.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream> 
#include <iomanip>
#include <cstdlib>  // contains prototypes for functions srand and rand
#include <ctime>    // contains prototype for function time
#include <array>   // contains vector class
using namespace std;

// rolls dice, calculates and displays sum; function prototype
unsigned int rollDice();

int main() {
    // scoped enumeration with constants that represent the game status
    enum class Status {CONTINUE, WON, LOST};    // all caps in constants
    
    // randomize random number generator using current time
    srand(static_cast<unsigned int>(time(0)));
    
    // set number of games to be played
    const int numOfGames{1000};
    
    // arrays to store the number of wins/losses
    const size_t arraySize{22};
    array<unsigned int, arraySize> wins{};
    array<unsigned int, arraySize> losses{};
    
    for( unsigned int i{1}; i <= numOfGames; i++ ) {
    
        unsigned int rollCount{1}; // initialize rollCount to 1
        unsigned int myPoint{0}; // point if no win or loss on first roll 
        Status gameStatus;  // can be CONTINUE, WON, or LOST
        unsigned int sumOfDice{rollDice()}; // first roll of the dice
    
        // determine game status and point (if needed) based on first roll
        switch ( sumOfDice ) {
            case 7: // win with 7 on first roll
            case 11: // win with 11 on first roll
                gameStatus = Status::WON;
                ++wins[rollCount];
                break;
            case 2: // lose with 2 on first roll
            case 3: // lose with 3 on first roll
            case 12: // lose with 12 on first roll
                gameStatus = Status::LOST;
                ++losses[rollCount];
                break;
            default: // did not win or lose, so remember point
                gameStatus = Status::CONTINUE; // game is not over
                myPoint = sumOfDice; // remember the point
                cout << "Point is " << myPoint << endl;
                break; // optional at end of switch
        }
    
        // while game is not complete
        while ( Status::CONTINUE == gameStatus ) { // not WON or LOST
            sumOfDice = rollDice(); // roll dice again
            rollCount++;
        
            // determine game status
            if ( sumOfDice == myPoint ) { // win by making point
                gameStatus = Status::WON;
                
                if ( rollCount > 21 )
                    rollCount = 21;
                
                ++wins[rollCount];
            }
            else {
                if ( sumOfDice == 7 ) {
                    gameStatus = Status::LOST;
                    
                    if ( rollCount > 21 ) 
                        rollCount = 21;
                    
                    ++losses[rollCount];
                }
            }
        }
    
        // display won or lost message
        if ( Status::WON == gameStatus ) {
            cout << "Player wins" << endl;
        }
        else {
            cout << "Player loses" << endl;
        }
    }
    
    // print table of results regarding wins and losses per numOfGames
    cout << setw(6) << "Roll" << setw(8) << "Wins" << setw(8) << "Losses" << endl;
    for ( size_t i{1}; i < arraySize; i++ ) {
        if ( i < arraySize - 1 )
            cout << setw(6) << i << setw(8) << wins[i] << setw(8) << losses[i] << endl;
        else
            cout << setw(5) << i << "+" << setw(8) << wins[i] << setw(8) << losses[i] << endl;
    }
    
    // chances at winning
    int totalWins{0}, totalLosses{0}; // variables to store total wins and losses
    
    // total up the wins and losses using a for loop
    for ( size_t i{1}; i < arraySize; i++ ) {
        totalWins += wins[i];
        totalLosses += losses[i];
    }
    
    // print chances at winning
    cout << "Chances at winning: " << 100 * totalWins/(totalLosses + totalWins)
        << "%" << endl;
        
    // average length of games
    int gameLength{0};    
    
    // total up the number of wins and losses times their rolls
    for ( size_t i{1}; i < arraySize; i++ ) {
        gameLength += wins[i] * i + losses[i] * i;
    }
    
    // print average game length
    cout << "Average game length: " 
        << gameLength / (totalWins + totalLosses) << " rolls" << endl;
}

// roll dice, calculate sum and display results
unsigned int rollDice() {
    int die1{1 + rand() % 6}; //  first die roll
    int die2{1 + rand() % 6}; // second die roll
    int sum{die1 + die2}; // compute sum of die values
    
    // display results of this roll
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
    return sum;
}
