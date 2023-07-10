//
// Created by 杨充 on 2023/7/10.
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
 * 使用 printf() 与 %f 输出浮点数
 */
void test0() {
    float f;             // 声明浮点数变量
    f = 12.001234f;       // 定义浮点数变量
    printf("f 的值为 %f \n", f);
}

/**
 * 使用 printf() 与 %e 输出双精度数。
 */
void test1() {
    double d;
    d = 12.001234f;
    printf("f 的值为 %f \n", d);
    printf("f 的值为 %le \n", d);
    //f 的值为 12.001234
    //f 的值为 1.200123e+01
}

void test2() {

}