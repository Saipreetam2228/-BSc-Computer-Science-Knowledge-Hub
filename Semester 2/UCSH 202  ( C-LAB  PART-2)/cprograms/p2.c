#include <stdio.h>

// Function to display the chessboard
void displayBoard(char board[8][8]) {
    printf("\n  a b c d e f g h\n");
    printf(" +----------------\n");

    for (int i = 0; i < 8; i++) {
        printf("%d|", 8 - i);

        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }

        printf("\n");
    }
}

// Function to initialize the chessboard
void initializeBoard(char board[8][8]) {
    // Initialize the board with pieces
    char pieces[] = "rnbqkbnr";
    
    for (int i = 0; i < 8; i++) {
        board[0][i] = pieces[i];
        board[1][i] = 'p';
        board[6][i] = 'P';
        board[7][i] = pieces[i] - ('a' - 'A');
        
        for (int j = 2; j < 6; j++) {
            board[j][i] = ' ';
        }
    }
}

// Function to perform a chess move
void makeMove(char board[8][8], char move[5]) {
    int fromRow = 8 - (move[1] - '0');
    int fromCol = move[0] - 'a';
    int toRow = 8 - (move[3] - '0');
    int toCol = move[2] - 'a';

    board[toRow][toCol] = board[fromRow][fromCol];
    board[fromRow][fromCol] = ' ';
}

int main() {
    char chessboard[8][8];

    initializeBoard(chessboard);

    char move[5];

    do {
        displayBoard(chessboard);

        printf("\nEnter your move (e.g., 'e2e4'): ");
        scanf("%s", move);

        makeMove(chessboard, move);

    } while (1);  // Infinite loop for simplicity, you may want to add conditions to end the game

    return 0;
}
