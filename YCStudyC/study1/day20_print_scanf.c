//
// Created by 杨充 on 2023/6/5.
//



//C 语言中的 I/O (输入/输出) 通常使用 printf() 和 scanf() 两个函数。

//当我们提到输入时，这意味着要向程序填充一些数据。
//当我们提到输出时，这意味着要在屏幕上、打印机上或任意文件中显示一些数据。

#include <printf.h>

void test1();
void test2();
void test3();
void test4();

int main() {
    printf("菜鸟教程 \n");
    test1();
    test2();
    test3();
    test4();
    return 0;
}

void test1() {
    int testInteger = 5;
    printf("Number = %d \n", testInteger);
}

void test2() {
    float f;
    printf("Enter a number \n: ");
    // %f 匹配浮点型数据
    scanf("%f", &f);
    printf("Value = %f \n", f);
}

//`sscanf()`函数与`scanf()`很类似，不同之处是`sscanf()`从字符串里面，而不是从用户输入获取数据。它的原型定义在头文件`stdio.h`里面。
void test3() {

}

//int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。
//这个函数在同一个时间内只会读取一个单一的字符。您可以在循环内使用这个方法，以便从屏幕上读取多个字符。
//int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。
//这个函数在同一个时间内只会输出一个单一的字符。您可以在循环内使用这个方法，以便在屏幕上输出多个字符。
void test4() {
    int c;
    printf("Enter a value :");
    c = getchar();
    if (c < 100 && c > 0) {
        printf("输入的数据范围在0到100之间");
    }
    printf("\nYou entered: ");
    putchar(c);
    printf("结束！\n");
}










