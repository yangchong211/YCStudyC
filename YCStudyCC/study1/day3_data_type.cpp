//
// Created by 杨充 on 2023/6/7.
//
#include <limits>
#include <iostream>

using namespace std;

//基本的内置类型
void test1();
//typedef 声明
void test2();
//枚举类型
void test3();

int main() {
    test1();
    test2();
    test3();
    return 0;
}

void test1() {

}

//枚举类型
//枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。

//如果枚举没有初始化, 即省掉"=整型常数"时, 则从第一个标识符开始。
//例如，下面的代码定义了一个颜色枚举，变量 c 的类型为 color。最后，c 被赋值为 "blue"。
enum color {
    red, green, blue
} c;
enum day {
    day1, day2, day3, day4
} d;

enum yc {
    tangguo,xinyi,yc
};


void test2() {
    c = blue;
//    ::printf(*c);

    //您可以使用 typedef 为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法：
    //例如，下面的语句会告诉编译器，feet 是 int 的另一个名称：
    typedef int feet;
    //现在，下面的声明是完全合法的，它创建了一个整型变量 distance：
    feet distance;
    d = day2;

    typedef int yc;
    yc d ;
    d = 100;
}



void test3() {

}


