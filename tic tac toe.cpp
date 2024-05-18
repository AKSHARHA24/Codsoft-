#include <iostream>

using namespace std;

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';

void printBoard(char board[3][3]) {
    cout << "    0   1   2\n";
    for (int row = 0; row < 3; row++) {
        cout << " " << row << "  ";
        for (int col = 0; col < 3; col++) {
            cout << board[row][col];
            if (col < 2) cout << " | ";
        }
        if (row < 2) cout << "\n   ---|---|---\n";
    }
    cout << "\n";
    cout << endl;
    cout << "-----------------------------" << endl;
}

bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool checkDraw(char board[3][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (board[row][col] == EMPTY) {
                return false;
            }
        }
    }
    return true;
}

void playerMove(char board[3][3], char player) {
    int row, col;
    while (true) {
        cout << "Player " << player << ", enter row and column (0-2): ";
        cin >> row >> col;
        cout << "-----------------------------" << endl;
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == EMPTY) {
            board[row][col] = player;
            break;
        } else {
            cout << "Invalid move. Try again.\n";
            cout << "-----------------------------" << endl;
        }
    }
}

int main() {
    char board[3][3] = {
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY},
        {EMPTY, EMPTY, EMPTY}
    };
    char currentPlayer = X;
    bool gameEnded = false;

    while (!gameEnded) {
        printBoard(board);
        playerMove(board, currentPlayer);
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            cout << "-----------------------------" << endl;
            gameEnded = true;
        } else if (checkDraw(board)) {
            printBoard(board);
            cout << "It's a draw!\n";
            cout << "-----------------------------" << endl;
            gameEnded = true;
        }
        if (!gameEnded) {
            currentPlayer = (currentPlayer == X) ? O : X;
        }
    }
    return 0;
}