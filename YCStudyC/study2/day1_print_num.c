//
// Created by 杨充 on 2023/7/10.
//
#include <stdio.h>

void test1();

int main(){
    int number;
    printf("请输入一个整数:");
//    scanf("%f" , & number);
    //这里必须是 %d ， 尝试其他的不行
    scanf("%d" , & number);
//    printf("您输入的整数是：%d" , number);
    //输入：scanf
    //输出：printf
    printf("您输入的整数是：%d\n" , number);


    test1();
    return 0;
}

void test1(){
    // %f 匹配浮点型数据
    float f;
    printf("请输入一个小数:");
    scanf("%f" , & f);
    printf("您输入的请输入一个小数是：%f\n" , f);
}