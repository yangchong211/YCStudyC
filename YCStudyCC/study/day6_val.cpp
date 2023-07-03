//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>

using namespace std;

void test1();
void test2();

int main() {
    cout << "Hello\tWorld\n\n";
    test1();
    test2();
    cout << "dou\tbi\n";
    return 0;
}

//字符串常量
//字符串字面值或常量是括在双引号 "" 中的。一个字符串包含类似于字符常量的字符：普通的字符、转义序列和通用的字符。
//您可以使用 \ 做分隔符，把一个很长的字符串常量进行分行。
void test1(){
    string greeting = "hello, runoob";
    cout << greeting;
    cout << "\n";     // 换行符
    string greeting2 = "hello, runoob";
    cout << greeting2;
}

//定义常量
//在 C++ 中，有两种简单的定义常量的方式：
//使用 #define 预处理器。
//使用 const 关键字。
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
void test2(){
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;


    //您可以使用 const 前缀声明指定类型的常量，如下所示：
    const int  LENGTH2 = 10;
    const int  WIDTH2  = 5;
    const char NEWLINE2 = '\n';
    int area2;
    area2 = LENGTH2 * WIDTH2;
    cout << area2;
    cout << NEWLINE2;
}



