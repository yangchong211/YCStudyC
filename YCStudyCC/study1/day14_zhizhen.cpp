//
// Created by 杨充 on 2023/6/8.
//



#include <iostream>
using namespace std;
//C++ 指针
void test1();
//什么是指针？
void test2();
//C++ 中使用指针
void test3();

int main(){
    test1();
    test2();
    test3();
    return 0;
}

void test1(){
    int var1;
    char var2[10];
    cout << "var1 变量的地址： ";
    cout << &var1 << endl;
    cout << "var2 变量的地址： ";
    cout << &var2 << endl;
}

//指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
//就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：
void test2(){
    int    *ip;    /* 一个整型的指针 */
    double *dp;    /* 一个 double 型的指针 */
    float  *fp;    /* 一个浮点型的指针 */
    char   *ch;    /* 一个字符型的指针 */
}

void test3(){
    int  var = 20;   // 实际变量的声明
    int  *ip;        // 指针变量的声明
    ip = &var;       // 在指针变量中存储 var 的地址
    cout << "Value of var variable: ";
    cout << var << endl;
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    char key1[] = "1";
    char key2[] = "2";
    char *public_key;
    char *private_key;
//    public_key = key1;
//    private_key = key2;
    public_key = "1";
    private_key = "2";
    cout << *public_key << endl;
    cout << *private_key << endl;
}


