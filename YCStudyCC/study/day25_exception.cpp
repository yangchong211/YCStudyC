//
// Created by 杨充 on 2023/6/20.
//
#include <iostream>
using namespace std;

//C++ 异常处理
//异常是程序在执行期间产生的问题。C++ 异常是指在程序运行时发生的特殊情况，比如尝试除以零的操作。
//异常提供了一种转移程序控制权的方式。C++ 异常处理涉及到三个关键字：try、catch、throw。

//throw: 当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。
//catch: 在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。
//try: try 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块。


double test1(int a , int b);
void test2();
void test3();

int main(){
//    test1(1,0);
    test2();
    test3();
    return 0;
}

//抛出异常
//您可以使用 throw 语句在代码块中的任何地方抛出异常。throw 语句的操作数可以是任意的表达式，表达式的结果的类型决定了抛出的异常的类型。
//报错日志：
//libc++abi: terminating due to uncaught exception of type char const*
//Abort trap: 6
double test1(int a , int b){
    if (b == 0){
        throw "Division by zero condition!";
    }
    return a/b;
}

void test2(){
    int x = 50;
    int y = 0;
    double z = 0;
    try {
        z = test1(x, y);
        cout << z << endl;
    }catch (const char* msg) {
        cerr << msg << endl;
    }
}

struct MyException : public exception {
    const char * what() const throw(){
        return "C++ Exception";
    }
};

void test3() {
    try {
        throw MyException();
    }
    catch (MyException &e) {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e) {
        //其他的错误
    }
}

