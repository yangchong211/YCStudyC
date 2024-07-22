//
// Created by 杨充 on 2023/12/8.
//

#ifndef YCSTUDYC_MINECLEARANCE_H
#define YCSTUDYC_MINECLEARANCE_H

#endif //YCSTUDYC_MINECLEARANCE_H


//标准输入输出
#include <stdio.h>
//动态申请内存
#include <stdlib.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10
int win = 0;


void game();

void menu();

void playGame();

void initBoard(char mine[ROWS][COLS], int rows, int cols, char set);

void printBoard(char board[ROWS][COLS], int row, int col);

void setMine(char mine[ROWS][COLS], int row, int col);

void checkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

void spreadOut(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y);

void signMine(char show[ROWS][COLS]);

void clearSign(char show[ROWS][COLS]);