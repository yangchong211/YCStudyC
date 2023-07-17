//
// Created by 杨充 on 2023/7/14.
//

#include <stdio.h>

void test0();
void test1();
void test2();

int main() {
//    test0();
//    test1();
    test2();
    return 0;
}

//循环输出26个字母
void test0() {
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }
    printf("\n");
    //A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
}

//输出大写或小写字母
void test1() {
    char c;
    scanf("%c" , &c);
    if (c == 'U' || c == 'u') {
        for (c = 'A'; c <= 'Z'; c++) {
            printf("%c ", c);
        }
        printf("\n");
    } else if (c == 'L' || c == 'l') {
        for (c = 'a'; c <= 'z'; c++) {
            printf("%c ", c);
        }
        printf("\n");
    } else {
        printf("请输入正确字符，比如：U，u，L，l\n");
        test1();
    }
}

//用户输入数字，判断该数字是几位数。
void test2() {
    long n;
    int count = 0;
    printf("请输入一个整数：");
    //`%ld`：十进制有符号长型整数。
    scanf("%ld",&n);
    while (n != 0){
        n = n / 10;
        count++;
    }
    printf("数字是 %d 位数。\n", count);
}