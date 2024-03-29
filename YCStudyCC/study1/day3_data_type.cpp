//
// Created by 杨充 on 2023/6/7.
//
#include <limits>
#include <iostream>

using namespace std;

//基本的内置类型
void test1();
//typedef 声明
void test2();
//枚举类型
void test3();
//类型转换
void test4();

int main() {
    test1();
    test2();
    test3();
    test4();
    return 0;
}

void test1() {
    //你可以用 "\n" 代替以上代码里的 endl。
    cout << "type: \t\t" << "************size**************" << endl;
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
    cout << "type: \t\t" << "************size**************" << endl;
}

//枚举类型
//枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。

//如果枚举没有初始化, 即省掉"=整型常数"时, 则从第一个标识符开始。
//例如，下面的代码定义了一个颜色枚举，变量 c 的类型为 color。最后，c 被赋值为 "blue"。
enum color {
    red, green, blue
} c;
enum day {
    day1, day2, day3, day4
} d;

enum yc {
    tangguo,xinyi,yc
};


void test2() {
    c = blue;
//    ::printf(*c);

    //您可以使用 typedef 为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法：
    //例如，下面的语句会告诉编译器，feet 是 int 的另一个名称：
    typedef int feet;
    //现在，下面的声明是完全合法的，它创建了一个整型变量 distance：
    feet distance;
    d = day2;

    typedef int yc;
    yc d ;
    d = 100;
}



void test3() {
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
}

//类型转换
//C++ 中有四种类型转换：静态转换、动态转换、常量转换和重新解释转换。

class Base {

};

class Derived : public Base {

};

//类型转换
//类型转换是将一个数据类型的值转换为另一种数据类型的值。
//C++ 中有四种类型转换：静态转换、动态转换、常量转换和重新解释转换。
void test4() {
    //静态转换  static_cast
    //静态转换是将一种数据类型的值强制转换为另一种数据类型的值。
    //静态转换通常用于比较类型相似的对象之间的转换，例如将 int 类型转换为 float 类型。
    //静态转换不进行任何运行时类型检查，因此可能会导致运行时错误。
    int i = 10;
    float f = i;
    float f2 = static_cast<float>(i);



    //动态转换 dynamic_cast
    //动态转换通常用于将一个基类指针或引用转换为派生类指针或引用。动态转换在运行时进行类型检查，如果不能进行转换则返回空指针或引发异常。
    Base* base = new Derived();
//    Derived* derived = dynamic_cast<Derived*>(base);

    //常量转化  const_cast
    //常量转换用于将 const 类型的对象转换为非 const 类型的对象。
    //常量转换只能用于转换掉 const 属性，不能改变对象的类型。
    const int j = 10;
    int & r = const_cast<int&>(j);

    const int k = 20;
    int & s = const_cast<int&>(k);


    //重新解释转换（Reinterpret Cast）
    //重新解释转换将一个数据类型的值重新解释为另一个数据类型的值，通常用于在不同的数据类型之间进行转换。
    //
    //重新解释转换不进行任何类型检查，因此可能会导致未定义的行为。
    int m = 10;
    float n = reinterpret_cast<float&>(m); // 重新解释将int类型转换为float类型

}
