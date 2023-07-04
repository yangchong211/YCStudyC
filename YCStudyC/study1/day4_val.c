//
// Created by 杨充 on 2023/5/25.
//
//stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
#include <stdio.h>
#include <float.h>

/** C 常量 */

//在 C 中，有两种简单的定义常量的方式：
//使用 #define 预处理器。
//使用 const 关键字。
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'


void areaVal(){
    const int  LENGTH1 = 10;
    const int  WIDTH1  = 5;
    const char NEWLINE1 = '\n';
    int area;

    area = LENGTH1 * WIDTH1;
    printf("value of area1 : %d", area);
    printf("%c", NEWLINE1);
}

//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
int main(){
    //整数常量可以带有一个后缀表示数据类型，例如：
    int myInt = 10;
    long myLong = 100000L;
    unsigned int myUnsignedInt = 10U;

    float myFloat = 3.14f;
    double myDouble = 3.14159;

    char myString[] = "Hello, world!"; //系统对字符串常量自动加一个 '\0'

    int area;
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
    //value of area : 50

    areaVal();

    return 0;
}


