//
// Created by 杨充 on 2023/7/11.
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

/**
 * 两个整数相加
 * 每一个变量都有一个内存位置，每一个内存位置都定义了可使用 & 运算符访问的地址，它表示了在内存中的一个地址。
 */
void test0() {
    int firstNum ;
    int secondNum ;
    int totalNum;
    printf("输入两个数(以空格分割): ");
    scanf("%d  %d",&firstNum , &secondNum);
    totalNum = firstNum + secondNum;
    // 输出结果
    printf("%d + %d = %d \n", firstNum, secondNum, totalNum);
}

/**
 * 两个浮点数相乘
 */
void test1() {
    float num1 , num2 , total;
    printf("请输入第一个浮点数");
    scanf("%f" , &num1);
    printf("请输入第二个浮点数");
    scanf("%f" , &num2);
    total = num1 * num2;
    printf("%f * %f = %f \n", num1, num2, total);
    printf("%.2f * %.2f = %.2f \n", num1, num2, total);

    //请输入第一个浮点数12.1
    //请输入第二个浮点数13.3333
    //12.100000 * 13.333300 = 161.332932
    //12.10 * 13.33 = 161.33
}

void test2() {
    int dividend, divisor, quotient, remainder;

    printf("输入被除数: ");
    scanf("%d", &dividend);

    printf("输入除数: ");
    scanf("%d", &divisor);

    // 计算商
    quotient = dividend / divisor;

    // 计算余数
    remainder = dividend % divisor;

    printf("商 = %d\n", quotient);
    printf("余数 = %d\n", remainder);
}