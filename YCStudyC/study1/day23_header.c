//
// Created by 杨充 on 2023/6/6.
//


#include <stdio.h>

//引用头文件的操作
//#include 指令会指示 C 预处理器浏览指定的文件作为输入。
//预处理器的输出包含了已经生成的输出，被引用文件生成的输出以及 #include 指令之后的文本输出。
//例如，如果您有一个头文件 day23_header.h，如下：
//#include <day23_header.h>
#include "day23_header.h"


//有条件引用
//有时需要从多个不同的头文件中选择一个引用到程序中。
//例如，需要指定在不同的操作系统上使用的配置参数。您可以通过一系列条件来实现这点，如下：
#if SYSTEM_1
# include "system_1.h"
#elif SYSTEM_2
# include "system_2.h"
#elif SYSTEM_3
...
#endif

char *test (void) {
    int sum = 17, count = 5;
    double mean;
    //这里要注意的是强制类型转换运算符的优先级大于除法，因此 sum 的值首先被转换为 double 型，然后除以 count，得到一个类型为 double 的值。
    mean = (double) sum / count;
    printf("dou bi 1 value of mean : %f\n", mean);
    return "a";
}

void testyc(void) {
    int sum = 17, count = 5;
    double mean;
    //这里要注意的是强制类型转换运算符的优先级大于除法，因此 sum 的值首先被转换为 double 型，然后除以 count，得到一个类型为 double 的值。
    mean = (double) sum / count;
    printf("dou bi 2 value of mean : %f\n", mean);
}

/**
 * 字符串转十六进制
 * @param bin 源数据
 * @param hex 十六进制
 * @param length 长度
 */
void stringToHexBig(unsigned char *bin, unsigned char *hex, int length) {
    int i = 0;
    int j = 0;
    for (i = 0,j = 0; i < length; i++, j += 2) {
        sprintf((char*)(hex + j), "%02X", bin[i]);
    }
}