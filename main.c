#include <stdio.h>
#include "ocase.c"
#include "xcase.c"

int main() {
    char board[9] = {'0','1','2','3','4','5','6','7','8'};
    char input;
    char output;
    int temp;

    printf("%c %c %c \n", board[0], board[1], board[2]);
    printf("%c %c %c \n", board[3], board[4], board[5]);
    printf("%c %c %c \n", board[6], board[7], board[8]);

    //Picking character
    printf("Enter X or O: ");
    scanf("%c", &input);

    //X Input
    if(input == 'X'){
        output = 'O';
        for(int i=0; i<9;i++){
            printf("Enter location to place X: ");
            scanf("%d", &temp);
            x(&temp, board, 9);
        }
    }

    //O input
    if(input == 'O'){
        output = 'X';
        for (int i=0; i<9; i++){
            printf("Enter location to place O: ");
            scanf("%d", &temp);
            o(&temp, board, 9);
        }
    }
}
