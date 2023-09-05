//
// Created by 杨充 on 2023/6/6.
//


#include <printf.h>
#include "day23_header.h"

void test1();

void test2();

int main() {
    test1();
    test2();
    testyc();
    return 0;
}

//使用强制类型转换运算符把一个整数变量除以另一个整数变量，得到一个浮点数：
void test1() {
    int sum = 17, count = 5;
    double mean;
    //这里要注意的是强制类型转换运算符的优先级大于除法，因此 sum 的值首先被转换为 double 型，然后除以 count，得到一个类型为 double 的值。
    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean);
    //Value of mean : 3.400000
}


//整数提升
void test2() {
    int  i = 17;
    char c = 'c'; /* ascii 值是 99 */
    int sum;
    sum = i + c;
    printf("Value of sum : %d\n", sum );
    //Value of sum : 116
}


