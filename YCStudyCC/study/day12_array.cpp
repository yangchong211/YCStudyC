//
// Created by 杨充 on 2023/6/8.
//

//C++ 数组
//声明数组
//double balance[10];
//初始化数组
//double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void test1();
void test2();
void test3();

int main() {
    test1();
    test2();
    test3();
    return 0;
}

void test1(){
    int n[10];
    for (int i = 0; i < 10; i++) {
        n[i] = i+100;
    }
    cout << "Element" << setw( 13 ) << "Value" << endl;
    // 输出数组中每个元素的值
    for ( int j = 0; j < 10; j++ ){
        cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
    }
    cout << "\n";
}