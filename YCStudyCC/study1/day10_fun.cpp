//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>

using namespace std;

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