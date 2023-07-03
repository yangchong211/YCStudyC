//
// Created by 杨充 on 2023/6/8.
//
#include <iostream>
using namespace std;

void test1();
void test2();

int main(){
    test1();
    test2();
    return 0;
}

void test1(){
    //int i, j, k; 声明并定义了变量 i、j 和 k，这指示编译器创建类型为 int 的名为 i、j、k 的变量。
    int    i, j, k;
    char   c, ch;
    float  f, salary;
    double d;

    //变量可以在声明的时候被初始化（指定一个初始值）。初始化器由一个等号，后跟一个常量表达式组成，如下所示：
//    extern int d2 = 3, f2 = 5;    // d 和 f 的声明
    int d3 = 3, f3 = 5;           // 定义并初始化 d 和 f
    char x = 'x';               // 变量 x 的值为 'x'
}

void test2(){
    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl ;
    f = 70.0/3.0;
    cout << f << endl ;
}

