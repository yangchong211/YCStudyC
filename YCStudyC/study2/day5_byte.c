//
// Created by 杨充 on 2023/7/12.
//


#include <stdio.h>

void test0();

void test1();

void test2();

//使用 sizeof 操作符计算int, float, double 和 char四种变量字节大小。
//sizeof 是 C 语言的一种单目操作符，如C语言的其他操作符++、--等，它并不是函数。
//sizeof 操作符以字节形式给出了其操作数的存储大小。
int main() {
    test0();
    test1();
    test2();
    return 0;
}

void test0() {
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    // sizeof 操作符用于计算变量的字节大小
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld bytes\n",sizeof(charType));

    //Size of int: 4 bytes
    //Size of float: 4 bytes
    //Size of double: 8 bytes
    //Size of char: 1 bytes
}


void test1() {
    int a;
    long b;
    long long c;

    double e;
    long double f;
    printf("Size of int = %ld bytes \n", sizeof(a));
    printf("Size of long = %ld bytes\n", sizeof(b));
    printf("Size of long long = %ld bytes\n", sizeof(c));

    printf("Size of double = %ld bytes\n", sizeof(e));
    printf("Size of long double = %ld bytes\n", sizeof(f));

    //Size of int = 4 bytes
    //Size of long = 8 bytes
    //Size of long long = 8 bytes
    //Size of double = 8 bytes
    //Size of long double = 8 bytes
}

void test2() {

}