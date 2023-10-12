//
// Created by 杨充 on 2023/5/25.
//
//stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
#include <stdio.h>
#include <float.h>

/** C 数据类型学习 */

//所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
int main(){
    //数据类型
    //printf() 用于格式化输出到屏幕。printf() 函数在 "stdio.h" 头文件中声明。
    printf("char 存储大小 : %lu \n", sizeof(char));     //1字节
    printf("short 存储大小 : %lu \n", sizeof(short));   //2字节
    printf("int 存储大小 : %lu \n", sizeof(int));       //4字节
    printf("long 存储大小 : %lu \n", sizeof(long));     //8字节

    printf("大小 %ld \n" , sizeof(long ));

    int a;
    printf("int 存储大小 ： %lu \n" , sizeof(a));


    //浮点型数据
    printf("float 存储最大字节数 : %lu \n", sizeof(float));    //4
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("float精度值: %d\n", FLT_DIG );                     //6
    printf("double 存储最大字节数 : %lu \n", sizeof(double));  //8
    printf("double 最小值: %E\n", DBL_MIN );
    printf("double 最大值: %E\n", DBL_MAX );
    printf("double精度值: %d\n", DBL_DIG );                    //15


    //类型转换
    int i = 10;
    float f = 3.14;
    double d = i + f; // 隐式将int类型转换为double类型
    printf("隐式类型转换实例：%f \n", d);

    double d2 = 3.14159;
    int i2 = (int)d2; // 显式将double类型转换为int类型
    printf("显式类型转换实例：%d \n", i2);
    return 0;
}