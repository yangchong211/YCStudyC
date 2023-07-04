//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>
using namespace std;
//C 风格字符串
void test1();
//C++ 中的 String 类
void test2();

// main() 是程序开始执行的地方
int main(){
    test1();
    test2();
    return 0;
}

void test1(){
    char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    char site2[] = "RUNOOB";
    char site3[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    cout << "菜鸟教程: ";
    cout << site3 << endl;

    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int  len ;
    // 复制 str1 到 str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;
    // 连接 str1 和 str2
    strcat( str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;
    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
}

void test2(){
    string str1 = "yangchong";
    string str2 = "tangxinyi";
    string str3;
    int  len ;
    // 复制 str1 到 str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    // 连接 str1 和 str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    // 连接后，str3 的总长度
    len = str3.size();
    cout << "str3.size() :  " << len << endl;
}

