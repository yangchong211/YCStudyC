//
// Created by 杨充 on 2023/5/25.
//
//stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
#include <stdio.h>

//2.2.1.1 常量固定值
void test_2_2_1_1();


//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
int main(){
    test_2_2_1_1();
    return 0;
}


//2.2.1.1 常量固定值
void test_2_2_1_1() {
    const int MAX = 100;  // 整型常量
    const float PI = 3.14;  // 浮点型常量
    const char NEWLINE = '\n';  // 字符常量
}


