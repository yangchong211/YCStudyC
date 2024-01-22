//
// Created by 杨充 on 2023/6/7.
//
#include <limits>
#include <iostream>
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
    //你可以用 "\n" 代替以上代码里的 endl。
    cout << "type: \t\t" << "************size**************"<< endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值" << (numeric_limits<bool>::min)() << endl;

    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值" << (numeric_limits<char>::max)();
    cout << "\t\t最小值" << (numeric_limits<char>::min)() << endl;

    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
    cout << "type: \t\t" << "************size**************"<< endl;
}

//枚举类型
enum color { red, green, blue } c;
void test2(){
    c = blue;
//    ::printf(*c);
}

//类型转换
//C++ 中有四种类型转换：静态转换、动态转换、常量转换和重新解释转换。

class Base{

};
class Derived : public Base{

};
void test3(){
    bool b = true;
    char c = 'a';
    int i = 100;
    float f = 5.2;
    double d = 13.14;
    wchar_t wc = 'd';

    //注意：不同系统会有所差异，一字节为 8 位。
    //1 byte = 8个字节     0000 0001 这就是8个字节，都是二进制
    //注意：默认情况下，int、short、long都是带符号的，即 signed。

    char cc = '1';
    signed char sc = '1';
    unsigned char unc = '1';
    cout << "这个是打印字节数组" << sizeof(cc);
    cout << "\tchar: \t" << "所占字节数：" << sizeof(sc);
    cout << "\tsigned char: \t" << "所占字节数：" << sizeof(sc);
    cout << "\tunsigned char: \t" << "所占字节数：" << sizeof(unc);



    //静态转换
//    int i = 10;
//    float f = i;
//    float f2 = static_cast<float>(i);
//
//    //动态转换
//    Base* base = new Derived();
////    Derived* derived = dynamic_cast<Derived*>(base);
//
//    //常量转化
//    const int j = 10;
//    int & r = const_cast<int&>(j);
}
