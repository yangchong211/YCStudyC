//
// Created by 杨充 on 2023/7/12.
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

//以下实例判断用户输入的整数是奇数还是偶数。
void test0() {
    int number;
    printf("请输入一个整数: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d 是一个偶数\n", number);
    } else {
        printf("%d 是一个奇数\n", number);
    }
}

//循环区间范围内的奇数/偶数
//比如输入1和10，输出偶数则为：2，4，6，8
void test1() {
    int min;
    int max;
    printf("请输入一个最小数: ");
    scanf("%d" , &min);
    printf("请输入一个最大数: ");
    scanf("%d" , &max);
    for (int i = min; i < max; i++) {
        if (i % 2 == 0) {
            printf("%d \n" , i);
        }
    }
}


//为设定区间和除数，返回可以整除的数。
void test2() {
    int min;
    int max;
    int num;
    printf("请输入一个最小数: ");
    scanf("%d" , &min);
    printf("请输入一个最大数: ");
    scanf("%d" , &max);
    printf("请输入一个除数: ");
    scanf("%d" , &num);
    for (int i = min; i < max; i++) {
        if (i % num == 0) {
            printf("%d \n" , i);
        }
    }
}