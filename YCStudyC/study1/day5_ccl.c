//
// Created by 杨充 on 2023/5/29.
//

//存储类定义 C 程序中变量/函数的的存储位置、生命周期和作用域。
//下面列出 C 程序中可用的存储类：
//auto              auto 存储类是所有局部变量默认的存储类。
//register
//static
//extern

#include <printf.h>

/* 函数声明 */
void func1(void );
static int count = 10;


int main(){
    //定义了两个带有相同存储类的变量，auto 只能用在函数内，即 auto 只能修饰局部变量。
    int mount;
    auto int mouth;

    //register 存储类定义存储在寄存器，所以变量的访问速度更快，但是它不能直接取地址，因为它不是存储在 RAM 中的。
    //在需要频繁访问的变量上使用 register 存储类可以提高程序的运行速度。
    register int miles;

    //static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
    while (count--){
        func1();
    }

    return 0;
}


void func1(){
    static int thingy = 5;
    thingy++;
    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}