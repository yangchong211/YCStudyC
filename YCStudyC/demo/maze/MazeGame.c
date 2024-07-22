//
// Created by 杨充 on 2023/12/8.
//

#include "MazeGame.h"

#define ROW 10 // 游戏区行数
#define COL 10 // 游戏区列数

#define UP 72    // 方向键：上
#define DOWN 80  // 方向键：下
#define LEFT 75  // 方向键：左
#define RIGHT 77 // 方向键：右


/*初始化地图信息，墙壁为1，通道为0*/
int map[ROW][COL] =
        {
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1, 0, 0, 0, 0, 1, 0, 0, 2, 1},
                {1, 1, 1, 1, 0, 1, 0, 1, 0, 1},
                {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                {1, 0, 1, 1, 1, 1, 1, 0, 1, 1},
                {1, 0, 0, 0, 0, 0, 1, 0, 1, 1},
                {1, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                {1, 0, 1, 0, 1, 1, 1, 1, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        };

int main() {
    man1.x = 10;
    man1.y = 10;
    man1.z = 10;


    /*初始化控制台窗口*/
    system("chcp65001"); // 设置编码格式为UTF-8
    system("cls");       // cmd窗口清屏

    /*打印地图*/
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            switch (map[i][j]) {
                case 0: // 打印通道
                    printf(" ");
                    break;
                case 1: // 打印墙壁
                    printf("■");
                    break;
                case 2: // 打印目的地
                    printf("#'");
                    break;
                default:
                    break;
            }
        }
    }

    /*打印游戏角色'@'*/
    printf("@");

    /*游戏逻辑主体*/
    while (1) {
        /*获取角色控制指令*/
        int willx = 0;      // 暂存角色移动后的横坐标
        int willy = 0;      // 暂存角色移动后的纵坐标
        char key = getchar(); // 读取keycode
        switch (key) {
            case UP: // 获取角色上移后的坐标
                willx = man.x;
                willy = man.y - man.v;
                break;
            case DOWN: // 获取角色下移后的坐标
                willx = man.x;
                willy = man.y + man.v;
                break;
            case LEFT: // 获取角色左移后的坐标
                willx = man.x - man.v;
                willy = man.y;
                break;
            case RIGHT: // 获取角色右移后的坐标
                willx = man.x + man.v;
                willy = man.y;
                break;
            default:
                break; // 其他按键则忽略处理
        }

        /*判断交互条件*/
        switch (map[willy][willx]) {
            case 0: // 在通道中移动
                man.x = willx; // 传递移动后的横坐标
                man.y = willy; // 传递移动后的纵坐标

                printf("\b ");                // 删除角色原来的痕迹
                printf("@");                  // 打印角色符号
                break;
            case 1: // 撞墙
                break;
            case 2: // 到达目的地
                CursorJump(2 * COL + 2, 0);
                printf("You win!\n"); // 游戏胜利
                getchar(); // 暂停等待，按任意键结束
                return 0;
                break;
            default:
                break;
        }
    }
}