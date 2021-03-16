#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char cont{'y'};                                         // Initialize cont to y
    int num;                                                // Variable for the random number
    int guess;                                              // Variable for the user's guess
    
    while ( cont == 'y' ) {
        srand(static_cast<unsigned int>(time(0)));          // Seed rand with time for each play
        num = 1 + rand() % 999;                             // 1 - 1,000
        
        cout << "I have a number between 1 and 1000."
            << "\nCan you guess my number?"
            << "\nPlease type your first guess." 
            << endl;
        cin >> guess;                                       // Input first guess
        
        while ( guess != num ) {                            // Start while loop if guess is incorrect
            if ( guess < num ) {                            // If...else for guesses 
                cout << "Too low. Try again." << endl;
                cin >> guess;
            }
            else if ( guess > num ) {
                cout << "Too high. Try again." << endl;
                cin >> guess;
            }
        }
        
        cout << "Excellent! You guessed the number!"        // Exit while loop if guess is correct
            << "\nWould you like to play again (y or n)?"
            << endl;
        cin >> cont;                                        // User decides whether or not to play again
        
        while ( cont != 'y' && cont != 'n' ){               // Input validation for cont variable
            cout << "Please input a valid answer (y or n)." << endl;
            cin >> cont;
        }
    }
}
