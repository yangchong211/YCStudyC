//
// Created by 杨充 on 2023/6/6.
//

//C 语言不提供对错误处理的直接支持，但是作为一种系统编程语言，它以返回值的形式允许您访问底层数据。
//在发生错误时，大多数的 C 或 UNIX 函数调用返回 1 或 NULL，同时会设置一个错误代码 errno，该错误代码是全局变量，表示在函数调用期间发生了错误。
//您可以在 errno.h 头文件中找到各种各样的错误代码。

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

//errno、perror() 和 strerror()
void test1();
//被零除的错误
void test2();
//程序退出状态
void test3();

int main() {
    //打开一个不存在的文件出现异常
//    test1();

    //被零除的错误
//    test2();

    //程序退出状态
    test3();
    return 0;
}

//errno、perror() 和 strerror()
//C 语言提供了 perror() 和 strerror() 函数来显示与 errno 相关的文本消息。
//perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式。
//strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
void test1() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "错误号：%d\n", errno);
        //错误号：2

        perror("通过 perror 输出错误");
        printf("异常 %d" , errnum);
        //通过 perror 输出错误: No such file or directory

        //todo 这里报错
        //fprintf(stderr, "打开文件错误 : %s\n", strerror(errnum));
        //fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
        //打开文件错误: No such file or directory
    } else {
        fclose(pf);
    }
}

//在进行除法运算时，如果不检查除数是否为零，则会导致一个运行时错误。
//为了避免这种情况发生，下面的代码在进行除法运算前会先检查除数是否为零：
void test2(){
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if( divisor == 0){
        fprintf(stderr, "除数为 0 退出运行...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为 : %d\n", quotient );
    //quotient 变量的值为 : 0
    exit(0);
    //除数为 0 退出运行...
}

void test3(){
    int dividend = 20;
    int divisor = 5;
    int quotient;
    if( divisor == 0){
        fprintf(stderr, "除数为 0 退出运行...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为: %d\n", quotient );
    exit(EXIT_SUCCESS);
}













