#include "queen.h"

Queen::Queen(Board *b) {
    board = b;
}


bool Queen::isUnderAttack(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board->board[i][col] == 'Q') return true;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board->board[i][j] == 'Q') return true;
    }
    for (int i = row, j = col; i >= 0 && j < SIZE; i--, j++) {
        if (board->board[i][j] == 'Q') return true;
    }
    return false;
}


bool Queen::placeQueens(int row) {
    if (row >= SIZE) return true;

    for (int col = 0; col < SIZE; col++) {
        if (!isUnderAttack(row, col)) {
            board->board[row][col] = 'Q';
            if (placeQueens(row + 1)) return true;
            board->board[row][col] = '-'; 
        }
    }
    return false;
}
