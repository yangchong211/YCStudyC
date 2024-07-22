//
// Created by 杨充 on 2023/12/7.
//


//（完整代码）
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include "Sokoban.h"


//宏定义数据
#define SPACE 0 //空地
#define WALL  1 //墙
#define PLAYER 2 //玩家
#define BOX   3 //箱子
#define DEST  4 //目的地
#define ROW   10 //行数
#define COL   10 //列数

/**
 * 初始化游戏提示
 */
void menu() {
    printf("*********欢迎来到推箱子小游戏**********\n");
    printf("***按方向键 W上 S下 A左 D右,可以实现移动方向***\n");
}

//数组储存数据
//定义地图
int map[2][ROW][COL];
//初始化地图
int level = 0;//当前所在关

void initMap() {
    //定义地图数组，二维数组有两个维度，而地图也是二维的矩形
    int temp[2][ROW][COL] = {
            //第一关游戏
            {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
                    {0, 0, 0, 1, 2, 1, 0, 0, 0, 0},
                    {0, 0, 0, 1, 0, 1, 1, 1, 1, 0},
                    {0, 1, 1, 1, 3, 3, 0, 2, 1, 0},
                    {0, 1, 2, 3, 4, 0, 1, 1, 1, 0},
                    {0, 1, 1, 1, 1, 3, 1, 0, 0, 0},
                    {0, 0, 0, 0, 1, 2, 1, 0, 0, 0},
                    {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
            },
            //第二关游戏
            {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 1, 1, 0, 0, 1, 1, 0, 0},
                    {0, 1, 0, 0, 1, 1, 0, 0, 1, 0},
                    {1, 0, 2, 0, 0, 0, 0, 2, 0, 1},
                    {1, 0, 0, 3, 4, 0, 3, 0, 0, 1},
                    {0, 1, 0, 3, 0, 0, 3, 0, 1, 0},
                    {0, 0, 1, 0, 2, 2, 0, 1, 0, 0},
                    {0, 0, 0, 1, 0, 0, 1, 0, 0, 0},
                    {0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
            }
    };
    //把临时的数组赋值给map
    memcpy(map, temp, sizeof(temp));
}

//输出地图
void show() {
    //system("cls");//清屏
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            //printf("%d", map[level][i][j]);
            //把数据转为图形输出  墙，人
            switch (map[level][i][j]) {
                case SPACE:
                    printf(" ");
                    break;
                case WALL:
                    printf("■");
                    break;
                case DEST:
                    printf("☆");
                    break;
                case BOX:
                    printf("★");
                    break;
                case PLAYER:
                    printf("♀");
                    break;
                case PLAYER + DEST:
                    printf("出");
                    break;
                case BOX + DEST:
                    //箱子在目的地上//玩家站在空地上
                    printf("进");
                    break;
            }
        }
        printf("\n");
    }
}

void move() {
    int r = -1, c = -1;
    //查找玩家的位置并复制给r c
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (map[level][i][j] == PLAYER || map[level][i][j] == PLAYER + DEST) {
                r = i;
                c = j;
                goto end;
            }
        }
    }
    end:;
    //获取按键操作。wasd控制上下左右
    char key = getchar();
    switch (key) {
        case 'w'://上
            //向上移动
            moveUp(r, c);
            break;
        case 's'://下
            //向下移动
            moveDown(r, c);
            break;
        case 'a'://左
            //向左移动
            moveLeft(r, c);
            break;
        case 'd':
            //向右移动
            moveRight(r, c);
            break;
    }
}

void moveRight(int r, int c) {
    if (map[level][r][c + 1] == SPACE || map[level][r][c + 1] == DEST) {
        map[level][r][c + 1] += PLAYER;
        map[level][r][c] -= PLAYER;
    } else if (map[level][r][c + 1] == BOX) {//箱子前面是空地或者是目的地
        if (map[level][r][c + 2] == SPACE || map[level][r][c + 2] == DEST) {
            //先把箱子移动到指定位置
            map[level][r][c + 2] += BOX;
            //把箱子从原来的位置删除
            map[level][r][c + 1] -= BOX;
            //把玩家移动到箱子的位置
            map[level][r][c + 1] += PLAYER;
            //把玩家从原来的位置删除
            map[level][r][c] -= PLAYER;
        }
    }
}

void moveLeft(int r, int c) {
    if (map[level][r][c - 1] == SPACE || map[level][r][c - 1] == DEST) {
        map[level][r][c - 1] += PLAYER;
        map[level][r][c] -= PLAYER;
    } else if (map[level][r][c - 1] == BOX) {//箱子前面是空地或者是目的地
        if (map[level][r][c - 2] == SPACE || map[level][r][c - 2] == DEST) {
            //先把箱子移动到指定位置
            map[level][r][c - 2] += BOX;
            //把箱子从原来的位置删除
            map[level][r][c - 1] -= BOX;
            //把玩家移动到箱子的位置
            map[level][r][c - 1] += PLAYER;
            //把玩家从原来的位置删除
            map[level][r][c] -= PLAYER;
        }
    }
}

void moveDown(int r, int c) {
    if (map[level][r + 1][c] == SPACE || map[level][r + 1][c] == DEST) {
        map[level][r + 1][c] += PLAYER;
        map[level][r][c] -= PLAYER;
    } else if (map[level][r + 1][c] == BOX || map[level][r + 1][c] == DEST) {//箱子前面是空地或者是目的地
        if (map[level][r + 2][c] == SPACE || map[level][r + 2][c] == DEST) {
            //先把箱子移动到指定位置
            map[level][r + 2][c] += BOX;
            //把箱子从原来的位置删除
            map[level][r + 1][c] -= BOX;
            //把玩家移动到箱子的位置
            map[level][r + 1][c] += PLAYER;
            //把玩家从原来的位置删除
            map[level][r][c] -= PLAYER;
        }
    }
}


//向上移动
void moveUp(int r, int c) {
    //只有人前面是空地或者目的地的时候我才可以移动
    //  r c 是玩家当前所在的下标
    if (map[level][r - 1][c] == SPACE || map[level][r - 1][c] == DEST) {
        map[level][r - 1][c] += PLAYER;
        map[level][r][c] -= PLAYER;
    } else if (map[level][r - 1][c] == BOX) {
        //箱子前面是空地或者是目的地
        if (map[level][r - 2][c] == SPACE || map[level][r - 2][c] == DEST) {
            //先把箱子移动到指定位置
            map[level][r - 2][c] += BOX;
            //把箱子从原来的位置删除
            map[level][r - 1][c] -= BOX;
            //把玩家移动到箱子的位置
            map[level][r - 1][c] += PLAYER;
            //把玩家从原来的位置删除
            map[level][r - 1][c] -= PLAYER;
        }
    }
}


//什么情况下过关
int judge() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (map[level][i][j] == BOX) {
                return 0;

            }
        }
    }
    return 1;
}

int main() {
    menu();
    initMap();
    show();
    move();
    while (1) {
        show();
        if (judge()) {
            level++;
            //每过一关加一
            if (level == 2) {
                printf("恭喜你过关了！");
                break;
            }

        }
        move();
    }
    return 0;
}