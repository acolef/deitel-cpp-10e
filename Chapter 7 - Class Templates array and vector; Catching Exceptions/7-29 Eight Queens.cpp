/* Pseudocode:
 * For a row:
 *  Check the row to see if there's a queen to the left
 *  Check the upper left diagonal to see if there's a queen
 *      If not, place a queen, 
 *          move to next row
 *      If so, don't place a queen, 
 *          move to next column
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>

#define N 8 // number of squares in a row/column; number of queens to be placed

std::array<std::array<bool, N>, N> gameBoard{false};

void printBoard(std::array<std::array<bool, N>, N>&);
bool validMove(std::array<std::array<bool, N>, N>&, int, int);
bool solveQueen(std::array<std::array<bool, N>, N>&, int);

int main() {
    if ( !solveQueen(gameBoard, 0) )
        std::cout << "No solution found!" << std::endl;
    
    printBoard(gameBoard);
}

void printBoard(std::array<std::array<bool, N>, N>& gameBoard) {
    for ( size_t i{0}; i < N; i++ ) {
        for ( size_t j{0}; j < N; j++ ) {
            if ( gameBoard[i][j] )
                std::cout << std::setw(3) << 'Q';
            else 
                std::cout << std::setw(3) << '0';
        }
        
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
}

bool validMove(std::array<std::array<bool, N>, N>& gameBoard, int row, int col) {
    for ( int i{0}; i < col; i++ ) { // check the row to the left
        if ( gameBoard[row][i] ) {
            return false;
        }
    }
    
    for ( int i = row, j = col; i >= 0 && j >= 0; --i, --j ) {   // check top left diagonal
        if ( gameBoard[i][j] ) {
            return false;
        }
    }
    
    for ( int i = row, j = col; i < N && j >= 0; ++i, --j ) {    // check bottom left diagonal
        if ( gameBoard[i][j] ) {
            return false;
        }
    }
    
    return true;    // return true if no conflicts are detected
}

bool solveQueen(std::array<std::array<bool, N>, N>& gameBoard, int col) {
    if ( col == N ) // all queens have been placed
        return true;
    
    for ( int row{0}; row < N; row++ ) {
        if ( validMove(gameBoard, row, col) ) {
            gameBoard[row][col] = true;
            if ( solveQueen(gameBoard, col + 1) )   // recursion step
                return true;
            gameBoard[row][col] = false; 
        }
    }
    
    return false; // no solution exists
}
