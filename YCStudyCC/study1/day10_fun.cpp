//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>

using namespace std;

//定义函数
//函数由一个函数头和一个函数主体组成。下面列出一个函数的所有组成部分：
//返回类型：一个函数可以返回一个值。return_type 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字 void。
//函数名称：这是函数的实际名称。函数名和参数列表一起构成了函数签名。
//参数：参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
//函数主体：函数主体包含一组定义函数执行任务的语句。

void test1();
int max1(int ,int);
void test2();
//参数的默认值
int sum(int , int b=20);

int main() {
    test1();
    test2();
    return 0;
}

void test1(){
    // 局部变量声明
    int a = 100;
    int b = 200;
    int ret;
    // 调用函数来获取最大值
    ret = max1(a, b);
    cout << "Max value is : " << ret << endl;
    cout << "\n";
}

void test2(){
    // 局部变量声明
    int a = 100;
    int b = 200;
    int result;
    // 调用函数来添加值
    result = sum(a, b);
    cout << "Total value is :" << result << endl;
    // 再次调用函数
    result = sum(a);
    cout << "Total value is :" << result << endl;
    cout << "\n";
}

// 函数返回两个数中较大的那个数
int max1(int num1, int num2) {
    // 局部变量声明
    int result;
    if (num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}

int sum(int a , int b){
    int result;
    result = a + b;
    return result;
}