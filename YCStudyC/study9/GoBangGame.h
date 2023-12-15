//
// Created by 杨充 on 2023/12/15.
//

#ifndef YCSTUDYC_GOBANGGAME_H
#define YCSTUDYC_GOBANGGAME_H

#endif //YCSTUDYC_GOBANGGAME_H
#pragma once

#include <stdio.h>
#include <string.h>

#define ROW 20    //行数
#define COL 20    //列数

#define PLAYER1 1
#define PLAYER2 2
#define P1_WIN 1
#define P2_WIN 2

#define DRAW 3    //平局
#define NEXT 0    //游戏是否继续的判定条件

int x = 0, y = 0;


enum Dire {		//在判断连珠条件时使用
    LEFT,
    RIGHT,
    UP,
    DOWN,
    LEFT_UP,
    LEFT_DOWN,
    RIGHT_UP,
    RIGHT_DOWN
};

void Menu();//打印菜单

void Game();//游戏函数

void ShowBoard(int board[][COL], int row, int col);//打印棋盘

void PlayerMove(int board[][COL], int row, int col, int who);//玩家落子

int ChessDire(int board[][COL], int row, int col, enum Dire d);//统计棋是否成连（IsOver里的函数）

int IsOver(int board[][COL], int row, int col);//判断游戏是否结束




