#include "board.h"
#include <iostream>

Board::Board()
{
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = '-';  // Initialize board with empty spaces
}
void Board::display() 
{
    for (int i = 0; i < SIZE; i++)
        {
        for (int j = 0; j < SIZE; j++) 
            {
            if (board[i][j] == 'Q')
                std::cout << "\033[47m " << board[i][j] << " \033[0m"; // Highlight queens
            else
                std::cout << "\033[40m " << board[i][j] << " \033[0m"; // Dark background
            }
        std::cout << std::endl;
    }
}
