/* Modification of Fig. 6.9 in Deitel text. Simulates a game of 
 * craps using dice rolls and seeded random number generation, 
 * along with scoped enumeration to indicate game status and
 * whether or not the user wants to keep playing. A scoped enum
 * wasn't necessary for the latter, but I use it for practice.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream> 
#include <cstdlib>  // contains prototypes for functions srand and rand
#include <ctime>    // contains prototype for function time
using namespace std;

unsigned int rollDice();    // rolls dice, calculates and displays sum; function prototype

int main() {
    int bankBalance{1000};  // bank balance variable initialized to 1000
    int wager;
    char cont;
    
    // scoped enumeration with constants that represent the game status
    enum class Status {CONTINUE, WON, LOST};    // all caps in constants
    // scoped enumeration with constants that represent whether the player wants to play or quit
    enum class Play {PLAY, QUIT};
    
    Play playOrQuit{Play::PLAY};    // can be PLAY or QUIT; initialized to PLAY
    
    while ( playOrQuit == Play::PLAY ) {
    
        // randomize random number generator using current time
        srand(static_cast<unsigned int>(time(0)));
    
        unsigned int myPoint{0}; // point if no win or loss on first roll 
        Status gameStatus;  // can be CONTINUE, WON, or LOST
    
        if ( bankBalance > 2000 ) {
            cout << "You're up big. Now's the time to cash in your chips!" << endl;
        }
        
        if ( bankBalance < 200 ) {
            cout << "Oh, you're going for broke, huh?" << endl;
        }
        
        cout << "You have $" << bankBalance << endl;
        cout << "Enter your wager: ";   cin >> wager;
    
        while ( wager > bankBalance ) {
            cout << "You don't have enough!";
            cout << "\nEnter your wager: "; cin >> wager;
        }
        
        if ( wager < 100 ) {
            cout << "Aw cmon, take a chance!" << endl;
        }
    
        unsigned int sumOfDice{rollDice()}; // first roll of the dice
    
        // determine game status and point (if needed) based on first roll
        switch ( sumOfDice ) {
            case 7: // win with 7 on first roll
            case 11: // win with 11 on first roll
                gameStatus = Status::WON;
                bankBalance += wager;
                break;
            case 2: // lose with 2 on first roll
            case 3: // lose with 3 on first roll
            case 12: // lose with 12 on first roll
                gameStatus = Status::LOST;
                bankBalance -= wager;
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
        
            // determine game status
            if ( sumOfDice == myPoint ) { // win by making point
                gameStatus = Status::WON;
                bankBalance += wager;
            }
            else {
                if ( sumOfDice == 7 ) {
                    gameStatus = Status::LOST;
                    bankBalance -= wager;
                
                    if ( bankBalance == 0) {
                        cout << "Sorry. You busted!" << endl;
                    }
                }
            }
        }
    
        // display won or lost message
        if ( Status::WON == gameStatus ) {
            cout << "Player wins" << endl;
            cout << "You have $" << bankBalance << endl;
        }
        else {
            cout << "Player loses" << endl;
            cout << "You have $" << bankBalance << endl;
        }
        
        cout << "Want to play again (y/n)?"; cin >> cont;
        
        while ( cont != 'y' && cont != 'n') {
            cout << "Please input a valid answer! (y/n)";
            cin >> cont;
        }
        if ( cont == 'y' ) {
            playOrQuit = Play::PLAY;
        }
        else if ( cont == 'n' ) {
            playOrQuit = Play::QUIT;
        }
    }
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
