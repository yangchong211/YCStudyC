//
// Created by 杨充 on 2023/12/8.
//
#include "GoBangGame.h"

int main() {
    int input = 0;
    int quit = 0;
    while (!quit) {
        Menu();
        scanf("%d", &input);
        switch (input) {
            case 1:
                Game();
                break;
            case 0:
                quit = 1;
                printf("推出游戏\n");
                break;
            default:
                printf("输入错误，请重新输入");
                break;
        }
    }
    return 0;
}

void Menu() {
    printf("################################\n");
    printf("##### 1.PLAY ###### 0.EXIT #####\n");
    printf("################################\n");
    printf("请输入选择:\n");
}

void Game() {
    printf("开始游戏了\n");
    int board[ROW][COL];
    memset(board, '\0', sizeof(board));    //初始化数组（即棋盘）
    int result = NEXT;
    do {
        ShowBoard(board, ROW, COL);
        PlayerMove(board, ROW, COL, PLAYER1);
        result = IsOver(board, ROW, COL);    //IsOver返回的值赋给result，判断游戏结果
        if (NEXT != result) {    //当NEXT不等于result证明出结果了，此时跳出循环
            break;
        }
        ShowBoard(board, ROW, COL);
        PlayerMove(board, ROW, COL, PLAYER2);
        result = IsOver(board, ROW, COL);
        if (NEXT != result) {
            break;
        }
    } while (1);
    //跳出循环证明已经出了结果
    switch (result) {
        case P1_WIN:
            printf("棋手1获胜！\n");
            break;
        case P2_WIN:
            printf("棋手2获胜！\n");
            break;
        case DRAW:
            printf("双方平局\n");
        default:
            break;
    }
}

void PlayerMove(int board[][COL], int row, int col, int who) {
    while (1) {
        printf("Player[%d]输入下棋坐标。输入两个值，第一个是x轴，第二个是y轴: ", who);
        scanf("%d %d \n", &x, &y);
        //判断坐标是否越界
        if (x < 1 || x > row || y < 1 || y > col) {
            printf("坐标不合法，请重新输入\n");
            continue;
        } else if (board[x - 1][y - 1] != 0) {
            //判断是否被占用
            printf("坐标被占用，请重新输入\n");
            continue;
        } else {
            board[x - 1][y - 1] = who;    //重点——board[][]的值实际记录的是最近一次下棋的玩家
            break;
        }
    }
}


void ShowBoard(int board[][COL], int row, int col) {
    printf("\033c");    //清屏命令，使棋盘只有一个，每次下棋自动更新棋盘
    printf(" ");        //使列号对应 点
    int i, j;
    for (i = 1; i <= col; i++) {
        printf("%3d", i); //打印列号
    }
    printf("\n");
    for (i = 0; i < row; i++) {
        printf("%2d", i + 1);//从1开始打印行数
        for (j = 0; j < col; j++) {
            if (board[i][j] == 0) {
                printf(" . ");//空白处为.
            } else if (board[i][j] == PLAYER1) {
                printf(" ● ");//玩家1落子
            } else {
                printf(" ○ "); //玩家2落子
            }
        }
        printf("\n");
    }
}


int IsOver(int board[][COL], int row, int col) {
    //定义四个连珠条件，每个连珠条件最后+1，因为五子连珠的情况包含基点坐标的棋子
    int dire1 = ChessDire(board, row, col, LEFT) + ChessDire(board, row, col, RIGHT) + 1;
    int dire2 = ChessDire(board, row, col, UP) + ChessDire(board, row, col, DOWN) + 1;
    int dire3 = ChessDire(board, row, col, LEFT_UP) + ChessDire(board, row, col, RIGHT_DOWN) + 1;
    int dire4 = ChessDire(board, row, col, LEFT_DOWN) + ChessDire(board, row, col, RIGHT_UP) + 1;

    if (dire1 >= 5 || dire2 >= 5 || dire3 >= 5 || dire4 >= 5)    //当连珠数量大于等于5(满足胜利条件)
    {
        //一定有人获胜
        if (board[x - 1][y - 1] == PLAYER1)//对应PlayerMove中存储的玩家
        {
            return P1_WIN;
        } else {
            return P2_WIN;
        }
    }
    //没有玩家获胜
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (board[i][j] == 0)//判断是否还有空位，有则继续
            {
                return NEXT;
            }
        }
    }
    //棋盘满了，平局
    return DRAW;
}


int ChessDire(int board[][COL], int row, int col, enum Dire d) {
    //判断某个方向的坐标时，实际用数组下标判断
    int _x = x - 1;
    int _y = y - 1;
    int count = 0;
    while (1) {
        switch (d) {
            case LEFT:
                _y--;
                break;
            case RIGHT:
                _y++;
                break;
            case UP:
                _x--;
                break;
            case DOWN:
                _x++;
                break;
            case LEFT_UP:
                _x--, _y--;
                break;
            case LEFT_DOWN:
                _x++, _y--;
                break;
            case RIGHT_UP:
                _x--, _y++;
                break;
            case RIGHT_DOWN:
                _x++, _y++;
                break;
            default:
                //无操作
                break;
        }
        if (_x < 0 || _x > row - 1 || _y < 0 || _y > col - 1) {
            //坐标移动完毕，一定要先保证没有越界
            break;
        }
        if (board[x - 1][y - 1] == board[_x][_y]) {
            //判定指定位置和原始位置的棋子是否相同，“连珠”就体现在这里
            count++;
        } else {
            //没有连珠也没有越界，直接跳出
            break;
        }
    }
    return count;
}
