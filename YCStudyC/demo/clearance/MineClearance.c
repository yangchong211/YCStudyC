//
// Created by 杨充 on 2023/12/8.
//
#include <time.h>
#include "MineClearance.h"


int main() {
    game();
    return 0;
}

void game() {
    int input = 0;
    do {
        menu();
        printf("请输入:>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                playGame();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新选择\n");
                break;
        }
    } while (input);
}

void menu() {
    printf("***************************\n");
    printf("********* 1.play **********\n");
    printf("********* 0.exit **********\n");
    printf("***************************\n");
}

void playGame() {
    printf("开始游戏\n");
    char mine[ROWS][COLS];//存放布置好的雷
    char show[ROWS][COLS];//存放排查出的雷的信息
    //初始化
    initBoard(mine, ROWS, COLS, '0');
    initBoard(show, ROWS, COLS, '*');

    //打印给玩家看
    printBoard(show, ROW, COL);

    //布置雷，将存放雷的数组有雷的位置设为'1'
    setMine(mine, ROW, COL);

    //排查雷
    checkMine(mine, show, ROW, COL);
}

void initBoard(char mine[ROWS][COLS], int rows, int cols, char set) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mine[i][j] = set;
        }
    }
}

void printBoard(char board[ROWS][COLS], int row, int col) {
    int i, j;
    for (i = 0; i <= col; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++) {
        printf("%2d ", i);
        for (j = 1; j <= col; j++) {
            printf("%2c ", board[i][j]);
        }
        printf("\n");
    }
}

void setMine(char mine[ROWS][COLS], int row, int col) {
    int count = 10;
    srand((unsigned int) time(NULL));
    while (count) {
        int x = rand() % row + 1;//1-9
        int y = rand() % col + 1;//1-9
        //存放雷的数组初始为'0'，存放之后设为1
        if (mine[x][y] == '0') {
            mine[x][y] = '1';
            count--;
        }
    }
}


void checkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    int x = 0, y = 0;
    char ch = 0;
    while (win < row * col - COUNT) {
        printf("请排查雷，坐标:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= ROW && y >= 1 && y <= COL && show[x][y] != '?') {
            if (mine[x][y] == '1') {
                printf("你被炸死了\n");
                printBoard(mine, ROW, COL);//打印地雷信息
                win = 0;
                break;
            } else {
                spreadOut(show, mine, x, y);//展开函数
                printBoard(show, ROW, COL);
                if (win == row * col - COUNT)
                    break;
                printf("标记地雷：Y，清除标记：N，跳过操作：F\n");
                while ((ch = getchar()) != '\n');//清空缓存区
                scanf("%c", &ch);
                switch (ch) {
                    case 'Y':
                        signMine(show);
                        break;
                    case 'N':
                        clearSign(show);
                        break;
                    default:
                        break;
                }
            }
        } else {
            printf("坐标不在棋盘范围内，请重新输入\n");
        }
    }
    if (win == row * col - COUNT) {
        printf("恭喜你，排雷成功，来看看本局的地雷吧：\n");
        printBoard(mine, ROW, COL);
        win = 0;
    }
}

int GetMineCount(char mine[ROWS][COLS], int x, int y) {
    return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
            mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

void spreadOut(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y) {
    if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
        win++;//win自增
        int count = GetMineCount(mine, x, y);
        if (count == 0)//该处周围八个格子都不是雷
        {
            show[x][y] = ' ';
            int i = 0, j = 0;
            for (i = x - 1; i <= x + 1; i++) {
                for (j = y - 1; j <= y + 1; j++) {
                    if (show[i][j] == '*') //该处没有被展开过
                    {
                        spreadOut(show, mine, i, j);
                    }
                }
            }
        } else//该处周围八个格子有雷，就显示数字
        {
            show[x][y] = count + '0';//将数字count转化为字符count
        }
    }
}

void signMine(char show[ROWS][COLS]) {
    int x = 0, y = 0;
    int input = 1;
    do {
        printf("请输入要标记的坐标:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= ROW && y >= 1 && y <= ROW && show[x][y] == '*') {
            show[x][y] = '?';
            printBoard(show, ROW, COL);
        } else
            printf("坐标已被标记或者坐标越界，请重新输入\n");
        printf("继续标记:1,跳过标记:0\n");
        scanf("%d", &input);
        switch (input) {
            case 1:
                signMine(show);
                input = 0;//关键
                break;
            default:
                break;
        }
    } while (input);
}

void clearSign(char show[ROWS][COLS]) {
    int x = 0, y = 0;
    int input = 0;
    do {
        printf("请输入要清除的坐标:>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= ROW && y >= 1 && y <= ROW && show[x][y] == '?') {
            show[x][y] = '*';
            printBoard(show, ROW, COL);
        } else {
            printf("坐标已被清除标记或者坐标越界，请重新输入\n");
        }
        printf("继续清除:1,跳过清除:0\n");
        scanf("%d", &input);
        switch (input) {
            case 1:
                clearSign(show);
                input = 0;//关键
                break;
            default:
                break;
        }
    } while (input);
}