//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>

using namespace std;

/*
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
void test1();
//C++ 中的类型限定符
void test2();
int main() {
    test1();
    test2();
    return 0;
}

void test1(){
    short int i;           // 有符号短整数
    short unsigned int j;  // 无符号短整数
    j = 50000;
    i = j;
    cout << i << " " << j << "\n";
    //-15536 50000
}

//C++ 中的类型限定符
//类型限定符提供了变量的额外信息，用于在定义变量或函数时改变它们的默认行为的关键字。
//const	const 定义常量，表示该变量的值不能被修改。。
//volatile	修饰符 volatile 告诉该变量的值可能会被程序以外的因素改变，如硬件或其他线程。。
//restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
//mutable	表示类中的成员变量可以在 const 成员函数中被修改。
//static	用于定义静态变量，表示该变量的作用域仅限于当前文件或当前函数内，不会被其他文件或函数访问。
//register	用于定义寄存器变量，表示该变量被频繁使用，可以存储在CPU的寄存器中，以提高程序的运行效率。
void test2(){
    //const 实例
    const int NUM = 10; // 定义常量 NUM，其值不可修改
    const int* ptr = &NUM; // 定义指向常量的指针，指针所指的值不可修改
    int const* ptr2 = &NUM; // 和上面一行等价

    //volatile 实例
    volatile int num = 20; // 定义变量 num，其值可能会在未知的时间被改变

    //mutable 实例
    class Example {
    public:
        int get_value() const {
            return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
        }
        void set_value(int value) const {
            value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
        }
    private:
        mutable int value_;
    };

    //static 实例
    static int count = 0; // static 关键字使变量 count 存储在程序生命周期内都存在
    count++;
}

//register 实例
//void example_function(register int num) {
    // register 关键字建议编译器将变量 num 存储在寄存器中
    // 以提高程序执行速度
    // 但是实际上是否会存储在寄存器中由编译器决定
//}











