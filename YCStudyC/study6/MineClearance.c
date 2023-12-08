//
// Created by 杨充 on 2023/12/8.
//
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

}