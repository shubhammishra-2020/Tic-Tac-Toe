#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void o(int *x, char b[9], int size){
    srand((unsigned int) time(NULL));
    if(*x == 0){
            b[0] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 1){
            b[1] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x== 2){
            b[2] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 3){
            b[3] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 4){
            b[4] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 5){
            b[5] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x== 6){
            b[6] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 7){
            b[7] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 8){
            b[8] = 'O';
            b[rand()%9] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
}