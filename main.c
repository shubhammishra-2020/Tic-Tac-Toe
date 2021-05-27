#include <stdio.h>

int main() {
    char board[9] = {'0','1','2','3','4','5','6','7','8'};
    char input;
    char output;
    int temp;

    printf("%c %c %c \n", board[0], board[1], board[2]);
    printf("%c %c %c \n", board[3], board[4], board[5]);
    printf("%c %c %c \n", board[6], board[7], board[8]);

    //Picking character
    printf("Enter X or O: " );
    scanf("%c", &input);

    if(input == 'X'){
        output = 'O';
        for(int i=0; i<9;i++){
            printf("Enter location to place X: ");
            scanf("%d", &temp);
            if(temp == 0){
                board[0] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 1){
                board[1] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 2){
                board[2] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 3){
                board[3] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 4){
                board[4] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 5){
                board[5] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 6){
                board[6] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 7){
                board[7] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 8){
                board[8] = 'X';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
        }
    }
    if(input == 'O'){
        output = 'X';
        for(int i=0; i<9;i++){
            printf("Enter location to place O: ");
            scanf("%d", &temp);
            if(temp == 0){
                board[0] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 1){
                board[1] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 2){
                board[2] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 3){
                board[3] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 4){
                board[4] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 5){
                board[5] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 6){
                board[6] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 7){
                board[7] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
            else if(temp == 8){
                board[8] = 'O';
                printf("%c %c %c \n", board[0], board[1], board[2]);
                printf("%c %c %c \n", board[3], board[4], board[5]);
                printf("%c %c %c \n", board[6], board[7], board[8]);
            }
        }
    }
}