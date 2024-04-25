#include <iostream>
#include <vector>
using namespace std;

const int BOARD_SIZE = 8;

// Function to check if a queen can be placed in a given position
bool isSafe(int row, int col, const vector<vector<int>>& board) {
    // Check for queens in the same column
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 1)
            return false;
    }

    // Check for queens in the upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 1)
            return false;
    }

    // Check for queens in the upper right diagonal
    for (int i = row, j = col; i >= 0 && j < BOARD_SIZE; --i, ++j) {
        if (board[i][j] == 1)
            return false;
    }

    return true;
}

// Function to solve the Eight Queens problem using the heuristic
bool solveEightQueens(int row, vector<vector<int>>& board) {
    // Base case: If all queens are placed, return true
    if (row >= BOARD_SIZE)
        return true;

    // Iterate through each column in the current row
    for (int col = 0; col < BOARD_SIZE; ++col) {
        // Check if queen can be placed in this position
        if (isSafe(row, col, board)) {
            // Place the queen
            board[row][col] = 1;

            // Recursively solve for the next row
            if (solveEightQueens(row + 1, board))
                return true;

            // If placing queen in this position doesn't lead to a solution, backtrack
            board[row][col] = 0;
        }
    }

    // If no position in this row leads to a solution, return false
    return false;
}

// Function to print the chessboard with queens
void printBoard(const vector<vector<int>>& board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Initialize the chessboard
    vector<vector<int>> board(BOARD_SIZE, vector<int>(BOARD_SIZE, 0));

    // Solve the Eight Queens problem
    if (solveEightQueens(0, board)) {
        cout << "Solution found:" << endl;
        printBoard(board);
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
