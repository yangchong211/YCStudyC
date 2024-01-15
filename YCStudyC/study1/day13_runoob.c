//
// Created by 杨充 on 2023/6/1.
//



#include <printf.h>

void test1();

void test2();

void test3();

void test4();

int main() {
    test1();
    test2();
    test3();
    test4();
    return 0;
}


//每一个变量都有一个内存位置，每一个内存位置都定义了可使用 & 运算符访问的地址，它表示了在内存中的一个地址。
void test1() {
    int var_runoob = 10;
    printf("var_runoob 地址是多少：%p \n",&var_runoob);
    printf("var_runoob 值是多少：%d \n",var_runoob);
    //var_runoob 地址是多少：0x16fa6f57c
    //var_runoob 值是多少：10


    //*表示指针
    int *p;
    //&表示访问地址
    p = &var_runoob;
    //%p 指针
    printf("p 地址是多少：%p \n",p);
    printf("p 值是多少：%d \n",*p);
    //打印指针
    //p 地址是多少：0x16d9b357c
    //p 值是多少：10
}

void test2() {
    //实际变量声明
    int var = 20;
    //指针变量声明
    int *ip;
    ip = &var;
    printf("var 变量的地址: %p\n", &var  );
    /* 在指针变量中存储的地址 */
    printf("ip 变量存储的地址: %p\n", ip );
    /* 使用指针访问值 */
    printf("*ip 变量的值: %d\n", *ip );
    //var 变量的地址: 0x16d9b357c
    //ip 变量存储的地址: 0x16d9b357c
    //*ip 变量的值: 20
}

//在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为空指针。
//在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。
//然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
void test3() {
    int  *ptr = NULL;
    printf("ptr 的地址是 %p\n", ptr  );
    //ptr 的地址是 0x0
}


//指针的算术运算
void test4(){

}

