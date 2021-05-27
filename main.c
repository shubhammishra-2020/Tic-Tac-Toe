#include <stdio.h>


int main() {
    char board[9] = {'-','-','-'};
    char input;
    char output;

    printf("%c %c %c \n", board[0], board[1], board[2]);
    printf("%c %c %c \n", board[0], board[1], board[2]);
    printf("%c %c %c \n", board[0], board[1], board[2]);

    printf("Enter X or O: " );
    scanf("%c", &input);

    if(input == 'X'){
        output = 'O';
        
    }
    if(input == 'O'){
        output = 'X';
    }
}