#include <iostream>
using namespace std;

char board[3][3];  // 3x3 board
char currentPlayer;

// Function to initialize the board
void initializeBoard() {
    char start = '1'; // board cells 1 to 9
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = start++;
        }
    }
    currentPlayer = 'X'; // X always starts first
}

// Function to display the board
void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---+---+---\n";
    }
    cout << "\n";
}

// Function to switch players
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Function to check if the current player has won
bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
        return true;
    }
    return false;
}

// Function to check if the game is a draw
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

// Function to handle a player’s move
void makeMove() {
    int choice;
    cout << "Player " << currentPlayer << ", enter your move (1-9): ";
    cin >> choice;

    if (choice < 1 || choice > 9) {
        cout << "Invalid move! Try again.\n";
        return;
    }

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Cell already taken! Try again.\n";
    } else {
        board[row][col] = currentPlayer;
        if (checkWin()) {
            displayBoard();
            cout << "🎉 Player " << currentPlayer << " wins!\n";
            exit(0); // End game
        } else if (checkDraw()) {
            displayBoard();
            cout << "It's a draw!\n";
            exit(0); // End game
        }
        switchPlayer();
    }
}

int main() {
    char playAgain;

    do {
        initializeBoard();
        while (true) {
            displayBoard();
            makeMove();
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing Tic-Tac-Toe!\n";
    return 0;
}
