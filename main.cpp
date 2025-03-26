#include "board.h"
#include "queen.h"

int main() {
    Board board;
    Queen queenSolver(&board);

    if (queenSolver.placeQueens(0)) {
        std::cout << "Solution Found:\n";
        board.display();
    } else {
        std::cout << "No solution exists.\n";
    }

    return 0;
}
