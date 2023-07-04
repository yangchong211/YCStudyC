//
// Created by 杨充 on 2023/6/20.
//


//了解动态内存在 C++ 中是如何工作的是成为一名合格的 C++ 程序员必不可少的。C++ 程序中的内存分为两个部分：
//栈：在函数内部声明的所有变量都将占用栈内存。
//堆：这是程序中未使用的内存，在程序运行时可用于动态分配内存。

#include <iostream>

using namespace std;

void test1();

void test2();

int main() {
    test1();
    test2();
    return 0;
}


//在 C++ 中，您可以使用特殊的运算符为给定类型的变量在运行时分配堆内的内存，这会返回所分配的空间地址。这种运算符即 new 运算符。
//如果您不再需要动态分配的内存空间，可以使用 delete 运算符，删除之前由 new 运算符分配的内存。
void test1() {
    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;   // 为变量请求内存
//    if( !(pvalue  = new double )) {
//        cout << "Error: out of memory." << endl;
//        exit(1);
//    }
    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue;         // 释放内存


    string *str = NULL;
    str = new string;
    cout << "Value of str : " << *str << " --  " << str << endl;
    //str = "yangchong";
    *str = "yangchong";
    cout << "Value of str : " << *str << endl;
    //删除之前的对象
    delete str;
}

void test2() {
    int **p;
    int i, j;
    //p[4][8]
    //开始分配4行8列的二维数据
    p = new int *[4];
    for (i = 0; i < 4; i++) {
        p[i] = new int[8];
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            p[i][j] = j * i;
        }
    }
    //打印数据
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            if (j == 0) cout << endl;
            cout << p[i][j] << "\t";
        }
    }
    //开始释放申请的堆
    for (i = 0; i < 4; i++) {
        delete[] p[i];
    }
    delete[] p;
}






