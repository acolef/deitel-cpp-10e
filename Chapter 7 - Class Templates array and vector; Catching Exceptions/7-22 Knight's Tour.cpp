/* Addresses the "Knight's Tour" chess problem using arrays. Uses an
 * accessibility heuristic to strategically move the knight according
 * to what squares are hardest to play on.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::array;
using std::setw;
using std::default_random_engine;
using std::uniform_int_distribution;

// the number of squares in a row or column of the chess board
const int squares{8};

void cleanBoard(array<array<int, squares>, squares>&);
bool validMove(array<array<int, squares>, squares>&, int, int);
void printBoard(array<array<int, squares>, squares>&);

int main() {
    // variables to indicate the knight's current position
    int currentRow, currentColumn, testRow, testColumn, accRow, accCol, accessNum;
    // variable for selecting a move from the horizontal and vertical arrays
    int moveNumber;
    // array representing the chess board
    array<array<int, squares>, squares> board;
    // arrays representing the possible moves
    array<int, 8> horizontal = {2, 1, -1, -2, -2, -1, 1, 2},
                    vertical = {-1, -2, -2, -1, 1, 2, 2, 1};
    // array for the accessibility heuristic
    array<array<int, squares>, squares> accessibility = {2, 3, 4, 4, 4, 4, 3, 2,
                                                         3, 4, 6, 6, 6, 6, 4, 3,
                                                         4, 6, 8, 8, 8, 8, 6, 4,
                                                         4, 6, 8, 8, 8, 8, 6, 4,
                                                         4, 6, 8, 8, 8, 8, 6, 4,
                                                         4, 6, 8, 8, 8, 8, 6, 4,
                                                         3, 4, 6, 6, 6, 6, 4, 3,
                                                         2, 3, 4, 4, 4, 4, 3, 2};
    // set up the C++11 random number generator
//    default_random_engine engine(33543);
//    uniform_int_distribution<int> rowPosition(1, 7);
//    uniform_int_distribution<int> colPosition(1, 7);
    
    // clear the board
    cleanBoard(board);
    // place the knight at a random position on the board
//    currentRow = rowPosition(engine);
//    currentColumn = colPosition(engine);
//    board[currentRow][currentColumn] += moveCount++;
    
    for ( size_t row{0}; row < squares; row++ ) {
        for ( size_t col{0}; col < squares; col++ ) {
            // variable that indicates the move number
            int moveCount{1}, leastAccess{9};
            bool complete{false};
            
            currentRow = row;
            currentColumn = col;
            board[currentRow][currentColumn] += moveCount++;
            
            while ( !complete ) {
                accessNum = leastAccess;
        
                for ( moveNumber = 0; moveNumber < squares; moveNumber++ ) {
                    testRow = currentRow + horizontal[moveNumber];
                    testColumn = currentColumn + vertical[moveNumber];
            
                    if ( validMove(board, testRow, testColumn) ) {
                        if ( accessibility[testRow][testColumn] < accessNum ) {
                            accessNum = accessibility[testRow][testColumn];
                            accRow = testRow;
                            accCol = testColumn;
                        } 
                        --accessNum;
                    }
                }
        
                if ( accessNum == leastAccess )
                    complete = true;
                else {
                    currentRow = accRow;
                    currentColumn = accCol;
                    board[currentRow][currentColumn] = moveCount++;
                }
            }
        
            printBoard(board);
            cleanBoard(board);
            cout << endl;
        }
    }
}

// cleans the board, populating it with all zeroes
void cleanBoard(array<array<int, squares>, squares>& board) {
    for ( size_t i{0}; i < squares; i++ ) {
        for ( size_t j{0}; j < squares; j++ ) {
            board[i][j] = 0;
        }
    }
}

// checks to see if a potential move is valid
bool validMove(array<array<int, squares>, squares>& tourBoard, int row, int col) {
    return ( tourBoard[row][col] == 0 && row >= 0 && row < squares && col >= 0 && col < squares );
}

void printBoard(array<array<int, squares>, squares>& gameBoard) {
    for ( size_t i{0}; i < squares; i++ ) {
        for ( size_t j{0}; j < squares; j++) {
            cout << setw(3) << gameBoard[i][j];
        }
        
        cout << endl;
    }
}
