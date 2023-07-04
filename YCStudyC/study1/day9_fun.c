//
// Created by 杨充 on 2023/5/30.
//

#include <printf.h>

//声明一个函数
int max(int num1, int num2);
int max2(int, int);
void swap2(int *x, int *y);
void swap1(int x, int y);
int foo(int i);

int main() {
    int x = max(7, 8);
    printf("Max value is : %d\n", x);
    int y = max2(100, 90);
    printf("Max value is : %d\n", y);

    //值传递
    /* 局部变量定义 */
    int A = 100;
    int B = 200;
    printf("交换前，a 的值： %d\n", A );
    printf("交换前，b 的值： %d\n", B );
    /* 调用函数来交换值 */
    swap1(A, B);
    //虽然在函数内改变了 a 和 b 的值，但是实际上 a 和 b 的值没有发生变化。
    printf("交换后，a 的值： %d\n", A );
    printf("交换后，b 的值： %d\n", B );


    //引用方式调用函数
    /* 局部变量定义 */
    int a = 100;
    int b = 200;
    printf("交换前，a 的值： %d\n", a );
    printf("交换前，b 的值： %d\n", b );
    /* 调用函数来交换值
     * &a 表示指向 a 的指针，即变量 a 的地址
     * &b 表示指向 b 的指针，即变量 b 的地址
    */
    swap2(&a, &b);
    //与传值调用不同，引用调用在函数内改变了 a 和 b 的值，实际上也改变了函数外 a 和 b 的值。
    printf("交换后，a 的值： %d\n", a );
    printf("交换后，b 的值： %d\n", b );

    for (int i = 0; i < 10; ++i) {
        printf("斐波那契数列 : %d\t\n", foo(i));
    }
    return 0;
}

//函数
//返回类型
//函数名称
//参数
//函数主体内容
int max(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int max2(int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

/* 函数定义 */
void swap2(int *x, int *y) {
    int temp;
    temp = *x;    /* 保存地址 x 的值 */
    *x = *y;      /* 把 y 赋值给 x */
    *y = temp;    /* 把 temp 赋值给 y */
    return;
}


/* 函数定义 */
void swap1(int x, int y){
    int temp;
    temp = x; /* 保存 x 的值 */
    x = y;    /* 把 y 赋值给 x */
    y = temp; /* 把 temp 赋值给 y */
    return;
}

int foo(int i){
    if(i == 0){
        return 0;
    }
    if(i == 1){
        return 1;
    }
    return foo(i-1) + foo(i -2);
}














