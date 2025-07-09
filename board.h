#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#define SIZE 8 
class Board {
public:
    char board[SIZE][SIZE];  
    Board();                 
    void display();          
};

#endif 
