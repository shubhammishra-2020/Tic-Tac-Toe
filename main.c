#include <stdio.h>
#include "ocase.c"
#include "xcase.c"

int main() {
    char board[9] = {'0','1','2','3','4','5','6','7','8'};
    char input;
    int temp;

    printf("%c %c %c \n", board[0], board[1], board[2]);
    printf("%c %c %c \n", board[3], board[4], board[5]);
    printf("%c %c %c \n", board[6], board[7], board[8]);

    //Picking character
    printf("Enter X or O: ");
    scanf("%c", &input);

    //X Input
    if(input == 'X'){
        for(int i=0; i<9;i++){
            printf("Enter location to place X: ");
            scanf("%d", &temp);
            x(&temp, board, 9);

            //horizontal
            if(board[0] == board[1] && board[1] == board[2]){
                printf("%c is the winner!!!! \n", board[0]);
                break;
            }
            else if(board[3] == board[4] && board[4] == board[5]){
                printf("%c is the winner!!!! \n", board[3]);
                break;
            }

            else if(board[6] == board[7] && board[7] == board[8]){
                printf("%c is the winner!!!! \n", board[6]);
                break;
            }
            //vertical
            else if(board[0] == board[3] && board[3] == board[6]){
                printf("%c is the winner!!!! \n", board[0]);
                break;
            }
            else if(board[1] == board[4] && board[4] == board[7]){
                printf("%c is the winner!!!! \n", board[1]);
                break;
            }
            else if(board[2] == board[5] && board[5] == board[8]){
                printf("%c is the winner!!!! \n", board[2]);
                break;
            }
        }
    }

    //O input
    if(input == 'O'){
        for (int i=0; i<9; i++){
            printf("Enter location to place O: ");
            scanf("%d", &temp);
            o(&temp, board, 9);


            //horizontal
            if(board[0] == board[1] && board[1] == board[2]){
                printf("%c is the winner!!!! \n", board[0]);
                break;
            }
            else if(board[3] == board[4] && board[4] == board[5]){
                printf("%c is the winner!!!! \n", board[3]);
                break;
            }

            else if(board[6] == board[7] && board[7] == board[8]){
                printf("%c is the winner!!!! \n", board[6]);
                break;
            }
            //vertical
            else if(board[0] == board[3] && board[3] == board[6]){
                printf("%c is the winner!!!! \n", board[0]);
                break;
            }
            else if(board[1] == board[4] && board[4] == board[7]){
                printf("%c is the winner!!!! \n", board[1]);
                break;
            }
            else if(board[2] == board[5] && board[5] == board[8]){
                printf("%c is the winner!!!! \n", board[2]);
                break;
            }
        }
    }
}
