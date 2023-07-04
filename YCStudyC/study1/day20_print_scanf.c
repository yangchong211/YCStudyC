//
// Created by 杨充 on 2023/6/5.
//



//C 语言中的 I/O (输入/输出) 通常使用 printf() 和 scanf() 两个函数。

//当我们提到输入时，这意味着要向程序填充一些数据。
//当我们提到输出时，这意味着要在屏幕上、打印机上或任意文件中显示一些数据。

#include <printf.h>

void test1();
void test2();

int main() {
    printf("菜鸟教程 \n");
    test1();
    test2();
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













