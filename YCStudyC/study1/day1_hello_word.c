//
// Created by 杨充 on 2023/5/25.
//
//stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
#include <stdio.h>

/** C 基础语法学习 */

//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
int main(){
    //printf() 用于格式化输出到屏幕。printf() 函数在 "stdio.h" 头文件中声明。
    printf("hello word , yc 哈哈哈 ");
    return 0;
}

//上面代码的含义
//程序的第一行 #include <stdio.h> 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
//下一行 int main() 是主函数，程序从这里开始执行。
//下一行 /*...*/ 将会被编译器忽略，这里放置程序的注释内容。它们被称为程序的注释。
//下一行 printf(...) 是 C 中另一个可用的函数，会在屏幕上显示消息 "Hello, World!"。
//下一行 return 0; 终止 main() 函数，并返回值 0。