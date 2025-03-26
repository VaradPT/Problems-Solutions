#ifndef QUEEN_H
#define QUEEN_H

#include "board.h"

class Queen {
private:
    Board *board; 

public:
    Queen(Board *b);  
    bool placeQueens(int row);  
    bool isUnderAttack(int row, int col);
};

#endif 
