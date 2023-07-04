//
// Created by 杨充 on 2023/6/6.
//


//#define	定义宏
//#include	包含一个源代码文件
//#undef	取消已定义的宏
//#ifdef	如果宏已经定义，则返回真
//#ifndef	如果宏没有定义，则返回真
//#if	如果给定条件为真，则编译下面代码
//#else	#if 的替代方案
//#elif	如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
//#endif	结束一个 #if……#else 条件编译块
//#error	当遇到标准错误时，输出错误消息
//#pragma	使用标准化方法，向编译器发布特殊的命令到编译器中
#include <printf.h>

//C 预处理器不是编译器的组成部分，但是它是编译过程中一个单独的步骤。
//简言之，C 预处理器只不过是一个文本替换工具而已，它们会指示编译器在实际编译之前完成所需的预处理。

//预处理器运算符
#define message_print(a , b) printf(#a " and " #b ": We love you!\n")
//宏延续运算符（\）
//一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）。例如：
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
//标记粘贴运算符（##）
//宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记。例如：
#define token_paster(n) printf ("token" #n " = %d\n", token##n)

//defined() 运算符
//预处理器 defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过。
//如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）。
#if !defined (MESSAGE)
#define MESSAGE "You wish!"
#endif

//参数化的宏 square2 其实等同于 square1
int square1(int x) {
    return x * x;
}
#define square2(x) ((x) * (x))


int main() {
    //ANSI C 定义了许多宏。在编程中您可以使用这些宏，但是不能直接修改这些预定义的宏。
    //__DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
    //__TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
    //__FILE__	这会包含当前文件名，一个字符串常量。
    //__LINE__	这会包含当前行号，一个十进制常量。
    //__STDC__	当编译器以 ANSI 标准编译时，则定义为 1。
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
    //File :day22_yclq.c
    //Date :Jun  6 2023
    //Time :21:54:05
    //Line :32
    //ANSI :1

    //预处理器运算符
    message_print(Yangchong, TangXinYi);
    //Yangchong and TangXinYi: We love you!

    //宏延续运算符（\）
    message_for(Yangchong, TangXinYi);
    //Yangchong and TangXinYi: We love you!

    //标记粘贴运算符（##）
    int token34 = 40;
    token_paster(34);
    //token34 = 40

    //defined() 运算符
    printf("Here is the message: %s\n", MESSAGE);
    //Here is the message: You wish!

    int num1 = square1(9);
    int num2 = square2(9);
    printf("square1: %d\n", num1);
    printf("square2: %d\n", num2);
    return 0;
}