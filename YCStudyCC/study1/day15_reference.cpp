//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>
using namespace std;


//C++ 引用 vs 指针
//引用很容易与指针混淆，它们之间有三个主要的不同：
//不存在空引用。引用必须连接到一块合法的内存。
//一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
//引用必须在创建时被初始化。指针可以在任何时间被初始化。

void test1();

int main(){
    test1();
    return 0;
}

void test1(){
    // 声明简单的变量
    int    i;
    double d;

    // 声明引用变量
    // 在这些声明中，& 读作引用。
    // 因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"。
    int&    r = i;
    double& s = d;


    int    x = i;
    double y = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;
    cout << "Value of i : " << x  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
    cout << "Value of d : " << y << endl;
}

