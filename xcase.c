#include <stdio.h>
void x(int *x, char b[9], int size){
    if(*x == 0){
            b[0] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 1){
            b[1] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x== 2){
            b[2] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 3){
            b[3] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 4){
            b[4] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 5){
            b[5] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x== 6){
            b[6] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 7){
            b[7] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
        else if(*x == 8){
            b[8] = 'X';
            printf("%c %c %c \n", b[0], b[1], b[2]);
            printf("%c %c %c \n", b[3], b[4], b[5]);
            printf("%c %c %c \n", b[6], b[7], b[8]);
        }
}