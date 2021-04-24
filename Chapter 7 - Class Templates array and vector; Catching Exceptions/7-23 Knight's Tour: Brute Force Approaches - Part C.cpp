/* Addresses the Knight's Tour problem by using a brute force approach.
 * Part B
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
#include <array>
#include <random>

const int N{8}, maxMoves{65};    // number of squares in a row/column of the board and max number of moves

bool solveKnight(std::array<int, maxMoves>&);
void printBoard(std::array<std::array<int, N>, N>&);
bool validMove(std::array<std::array<int, N>, N>&, int, int);

int main() {
    std::array<int, maxMoves> frequency{};    // keeps track of the tour lengths
    bool fullTour{false};
    
    while ( !fullTour ) {
        
        if ( solveKnight(frequency) ) {
            fullTour = true;
            std::cout << "Full tour!" << std::endl;
        }
        else
            std::cout << "Not a full tour." << std::endl;
    }
    
    std::cout << std::setw(5) << "Moves" << std::setw(10) << "Frequency" << std::endl;  // print headers
    for ( int i{0}; i < maxMoves; i++ ) {   // print out the elements of frequency
        std::cout << std::setw(5) << i << std::setw(10) << frequency[i] << std::endl;
    }
}

bool solveKnight(std::array<int, maxMoves>& frequency) {
    std::array<std::array<int, N>, N> board{};
    std::array<int, N> horizontal = {2, 1, -1, -2, -2, -1, 1, 2};
    std::array<int, N> vertical = {-1, -2, -2, -1, 1, 2, 2, 1};
    
    std::random_device r;
    std::default_random_engine engine{r()};
    
    // place the knight at a random spot on the board
    std::uniform_int_distribution<int> randomRow{0, 7};
    std::uniform_int_distribution<int> randomColumn{0, 7};
    int currentRow = randomRow(engine);
    int currentColumn = randomColumn(engine); 
    int moveNumber{0};
    board[currentRow][currentColumn] = ++moveNumber;

    bool complete{false};
        
    while ( !complete ) {
        
        if ( moveNumber == 64 ) {   // break out of loop after the 64th move
            printBoard(board);
            ++frequency[moveNumber];
                    
            return true;
        }
        
        std::uniform_int_distribution<int> randomMove{0, 7};
        int move = randomMove(engine);  // produce a random move number
        
        int testRow = currentRow + horizontal[move];    // test the move to see if it's valid
        int testColumn = currentColumn + vertical[move];
        bool goodMove = validMove(board, testRow, testColumn);
        
        if ( goodMove ) {   // if the move passes the test, place the knight
                
            currentRow = testRow;
            currentColumn = testColumn;
            board[currentRow][currentColumn] = ++moveNumber;
        }
        else {  // if the move fails the test, try the other move numbers 
            
            for ( int i{0}; i < N - 1 && !goodMove; i++ ) {
                move = (move + 1) % N;  // % keeps move in range [0, N - 1]
                
                testRow = currentRow + horizontal[move];
                testColumn = currentColumn + vertical[move];
                goodMove = validMove(board, testRow, testColumn);
                
                if ( goodMove ) {   // for the first "good" move encountered, place the knight there
                        
                    currentRow = testRow;
                    currentColumn = testColumn;
                    board[currentRow][currentColumn] = ++moveNumber;
                }
            }
            
            if ( !goodMove ) {    // if no good moves are found after trying them all, the while loop ends
                    
                ++frequency[moveNumber];
                complete = true;
            }
        }
    }
    
    printBoard(board);  // if we don't reach the 64th move, return false
    return false;
}

void printBoard(std::array<std::array<int, N>, N>& board) {
    for ( int i{0}; i < N; i++ ) {
        for ( int j{0}; j < N; j++ ) {
            std::cout << std::setw(3) << board[i][j];
        }
        
        std::cout << std::endl;
    }
}

bool validMove(std::array<std::array<int, N>, N>& board, int row, int column) {
    return ( row >= 0 && row < N && column >= 0 && column < N && board[row][column] == 0 );
}
