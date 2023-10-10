//
// Created by 杨充 on 2023/10/10.
//
#include "stdio.h"

int main() {
    //题目：输出9*9口诀。
    //程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。
    int i, j, num;
    printf("\n");
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j <= i; j++) {
            num = i * j;
            //*-3d表示左对齐，占3位
            printf("%d*%d=%-3d", i, j, num);
        }
        printf("\n");
    }
}