//
// Created by 杨充 on 2023/5/25.
//
//stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
#include <stdio.h>
#include <float.h>

/** C 变量和常量 */

// 函数外定义变量 x 和 y
int x;
int y;
int addNum(){
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}
int addNum2();

//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
int main(){
    int result;
    result = addNum();
    printf("reslut 为：%d \n" , result);
    int num = addNum2();
    printf("addNum num 等于 %d \n" , num);
    return 0;
}

//注意：在main方法中，无法执行在它后面的 addNum2 方法
int addNum2(){
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}