//
// Created by 杨充 on 2023/10/10.
//
#include "stdio.h"

void test1();

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
    test1();
}

void test1() {
    //题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
    //程序分析：(a>b)?a:b这是条件运算符的基本例子。
    int score;
    char grade;
    printf("请输入分数");
    scanf("%d", &score);
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else {
        grade = 'C';
    }
    printf("\n");
    printf("该学生的成绩%c \n", grade);
}