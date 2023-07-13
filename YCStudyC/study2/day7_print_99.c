//
// Created by 杨充 on 2023/7/13.
//



#include <stdio.h>

void test0();

void test1();

void test2();

int main() {
    test0();
    test1();
    test2();
    return 0;
}

//输出九九乘法口诀表
void test0() {
    int i;
    int j;
    int num ;
    for (i = 0; i < 9; i++) {
        for (j = 1; j < i; j++) {
            num = i * j;
            printf("%d * %d = %d\t" , i , j , num);
        }
        printf("\n");
    }
}

//用户输入一个字符，判断该字符是否为一个字母。
void test1() {
    char c;
    printf("请输入一个字符：");
    scanf("%c" , &c);
    //a-z ; A-Z
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c 是一个字符\n" , c);
    } else {
        printf("%c 不是一个字符\n" , c);
    }
}


//计算自然数的和
//自然数是指表示物体个数的数，即由0开始，0，1，2，3，4，……一个接一个，组成一个无穷的集体，即指非负整数。
void test2() {
    int num;
    int total = 0;
    printf("请输入一个自然数");
    scanf("%d" , &num);
    for (int i = 1; i <= num; i++) {
        total = total + i;
    }
    printf("自然数%d的和是%d \n" , num , total);
}