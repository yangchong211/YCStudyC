//
// Created by 杨充 on 2023/6/6.
//



//面向对象程序设计
//C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：
//封装（Encapsulation）：封装是将数据和方法组合在一起，对外部隐藏实现细节，只公开对外提供的接口。这样可以提高安全性、可靠性和灵活性。
//继承（Inheritance）：继承是从已有类中派生出新类，新类具有已有类的属性和方法，并且可以扩展或修改这些属性和方法。这样可以提高代码的复用性和可扩展性。
//多态（Polymorphism）：多态是指同一种操作作用于不同的对象，可以有不同的解释和实现。它可以通过接口或继承实现，可以提高代码的灵活性和可读性。
//抽象（Abstraction）：抽象是从具体的实例中提取共同的特征，形成抽象类或接口，以便于代码的复用和扩展。抽象类和接口可以让程序员专注于高层次的设计和业务逻辑，而不必关注底层的实现细节。
#include <iostream>
using namespace std;

//基本的内置类型
void test2_1();
//多类型修饰符
void test2_2();
//其他一些类型
void test2_3();
//数据类型介绍练习题
void test2_8();
//类型转换
void test5_1();

// main() 是程序开始执行的地方
int main(){
    cout << "Hello World 哈哈哈 \n"; // 输出 Hello World
    //下一行 return 0; 终止 main( )函数，并向调用进程返回值 0。
    cout << "逗比" ;
//    test2_1();
//    test2_2();
//    test2_3();
    test2_8();
//    test5_1();
    return 0;
}



//C++ 变量类型
//在 C++ 中，有多种变量类型可用于存储不同种类的数据。
//C++ 中每个变量都有指定的类型，类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。
void test1(){
    //int i, j, k; 声明并定义了变量 i、j 和 k，这指示编译器创建类型为 int 的名为 i、j、k 的变量。
    int    i, j, k;
    char   c, ch;
    float  f, salary;
    double d;

    //变量可以在声明的时候被初始化（指定一个初始值）。初始化器由一个等号，后跟一个常量表达式组成，如下所示：
//    extern int d2 = 3, f2 = 5;    // d 和 f 的声明
    int d3 = 3, f3 = 5;           // 定义并初始化 d 和 f
    char x = 'x';               // 变量 x 的值为 'x'
}



//C++ 中的变量定义
//变量定义就是告诉编译器在何处创建变量的存储，以及如何创建变量的存储。
void test2(){
    // 变量定义
    int a, b;
    int c;
    float f;
    double d;


    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl ;
    f = 70.0/3.0;
    cout << f << endl ;
}


//基本的内置类型
//您可能需要存储各种数据类型（比如字符型、宽字符型、整型、浮点型、双浮点型、布尔型等）的信息，操作系统会根据变量的数据类型，来分配内存和决定在保留内存中存储什么。
//布尔型	    bool
//字符型	    char
//整型	    int
//浮点型	    float
//双浮点型	double
//无类型	    void
//宽字符型    wchar_t
void test2_1(){
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
    cout << "\n" << endl;
}



//多类型修饰符
//一些基本类型可以使用一个或多个类型修饰符进行修饰：
//signed
//unsigned
//short
//long

//无符号类型是一种整数类型，它只能表示非负整数值。
//无符号类型使用unsigned关键字进行声明，并可以与不同的整数类型（如int、short、long等）结合使用，以表示不同的位数和范围。
//unsigned char：无符号字符类型，范围为0到255。
//unsigned short：无符号短整数类型，通常为16位，范围为0到65535。
//unsigned int：无符号整数类型，通常为32位，范围为0到4294967295。
//unsigned long：无符号长整数类型，通常为32位或64位，范围取决于编译器和平台。
//unsigned long long：无符号长长整数类型，通常为64位，范围为0到18446744073709551615。
//无符号类型只能表示非负整数值，因此不能用于表示负数。在使用无符号类型时，需要注意溢出的问题，因为无符号类型没有符号位来表示负数，当计算结果超出类型的范围时，会发生溢出。




//注意：不同系统会有所差异，一字节为 8 位。
//注意：默认情况下，int、short、long都是带符号的，即 signed。
//注意：long int 8 个字节，int 都是 4 个字节，早期的 C 编译器定义了 long int 占用 4 个字节，int 占用 2 个字节，新版的 C/C++ 标准兼容了早期的这一设定。
//char	                1 个字节	-128 到 127 或者 0 到 255
//unsigned char	        1 个字节	0 到 255
//signed char	        1 个字节	-128 到 127
//int	                4 个字节	-2147483648 到 2147483647
//unsigned int	        4 个字节	0 到 4294967295
//signed int	        4 个字节	-2147483648 到 2147483647
//short int	            2 个字节	-32768 到 32767
//unsigned short int	2 个字节	0 到 65,535
//signed short int	    2 个字节	-32768 到 32767
//long int	            8 个字节	-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
//signed long int	    8 个字节	-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
//unsigned long int	    8 个字节	0 到 18,446,744,073,709,551,615
//float	                4 个字节	精度型占4个字节（32位）内存空间，+/- 3.4e +/- 38 (~7 个数字)
//double	            8 个字节	双精度型占8 个字节（64位）内存空间，+/- 1.7e +/- 308 (~15 个数字)
//long long	            8 个字节	双精度型占8 个字节（64位）内存空间，表示 -9,223,372,036,854,775,807 到 9,223,372,036,854,775,807 的范围
//long double	        16 个字节	长双精度型 16 个字节（128位）内存空间，可提供18-19位有效数字。
//wchar_t	            2 或 4 个字节	1 个宽字符
void test2_2(){

    //你可以用 "\n" 代替以上代码里的 endl。
    cout << "type: \t\t" << "************size**************" << endl;
    //sizeof是一个运算符，用于获取数据类型或变量的字节大小。它返回一个size_t类型的值，表示所操作对象的字节大小。
    //sizeof运算符可以用于以下几种情况：
    //数据类型的大小：可以使用sizeof运算符来获取数据类型的字节大小。例如，sizeof(int)将返回int类型的字节大小。
    //变量的大小：可以使用sizeof运算符来获取变量的字节大小。例如，sizeof(variable)将返回变量variable的字节大小。
    //数组的大小：可以使用sizeof运算符来获取数组的字节大小。例如，sizeof(array)将返回数组array的字节大小。
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

    int n[10] = {1,4,2,6};
    int length = sizeof(n) / sizeof(n[0]);
    cout << "除数: \t" << "所占字节数：" << length << endl;
    cout << "type: \t\t" << "************size**************" << endl;
}

//其他一些类型
//size_t是一种无符号整数类型，用于表示对象的大小或数组的索引。它是C++标准库中定义的类型，通常用于表示内存大小、数组长度和对象的大小。
void test2_3(){
    //size_t类型通常用于与sizeof运算符一起使用，以获取对象或类型的大小。它也常用于表示数组的长度或循环的计数器。
    size_t size = 10;  // 使用size_t类型声明变量并赋值为10
    std::cout << "Size: " << size << std::endl;

}

//数据类型介绍练习题
void test2_8(){
    //将char转化为uint8_t
    //由于char类型可以是有符号或无符号的，转换为uint8_t类型可以确保将其视为无符号8位整数。
    //有一个char类型的变量ch，其值为'A'。然后，我们使用static_cast<uint8_t>将ch转换为uint8_t类型，并将结果赋值给value变量。
    //最后，我们使用static_cast<int>将value转换为int类型，并打印出其值。
    //需要注意的是，转换char类型为uint8_t类型时，如果char类型的值超出了uint8_t类型的范围（0到255），则可能会发生截断或溢出。
    char ch = 'A';  // 假设有一个char类型的变量ch，其值为'A'
    uint8_t value = static_cast<uint8_t>(ch);  // 将char类型转换为uint8_t类型
    std::cout << "Value: " << static_cast<int>(value) << std::endl;


    //将string转化为uint8_t
    //将std::string转换为uint8_t类型需要进行逐个字符的转换。
    //由于uint8_t是一个无符号8位整数类型，我们可以使用static_cast<uint8_t>将每个字符转换为uint8_t类型。
    std::string str = "Hello, World!";  // 假设有一个std::string类型的变量str

    std::vector<uint8_t> vec;
    for (char i : str) {
        vec.push_back(static_cast<uint8_t>(i));  // 将每个字符转换为uint8_t类型并添加到vector中
    }
    // 打印转换后的uint8_t值
    for (uint8_t uint8 : vec) {
        std::cout << "打印转换后的uint8_t值" << static_cast<int>(uint8) << " " << std::endl;
    }
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
    cout << "类型转化" << endl;
    //静态转换  static_cast
    //静态转换是将一种数据类型的值强制转换为另一种数据类型的值。
    //静态转换通常用于比较类型相似的对象之间的转换，例如将 int 类型转换为 float 类型。
    //静态转换不进行任何运行时类型检查，因此可能会导致运行时错误。
    int i = 10;
    float f = i;
    float f2 = static_cast<float>(i);
    float f3 = 11.3;
    int i2 = static_cast<int >(f3);
    cout << "静态转换 " <<  f2 << " , " << i2 <<endl;

    //size_t是C++中的一种无符号整数类型，用于表示对象的大小或元素的数量。它通常用于与内存分配、数组索引和循环计数等相关的操作。
    //size_t的大小在不同的平台上可能会有所变化，但它通常被设计为足够大以容纳系统中最大可能的对象大小。在大多数情况下，size_t的大小与unsigned int或unsigned long相同。
    size_t buffer_size = static_cast<size_t>(4096);
    //warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]
    //auto buffer_size2 = static_cast<size_t>(4096);
    cout << "size_t静态转换 " <<  buffer_size  << " , " << buffer_size <<endl;


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
    //重新解释转换不进行任何类型检查，因此可能会导致未定义的行为。
    int m = 10;
    // 重新解释将int类型转换为float类型
    float n = reinterpret_cast<float&>(m);
    float *f4 = reinterpret_cast<float*>(m);
    //& 运算符访问的地址，它表示了在内存中的一个地址。
    //* 星号是用来指定一个变量是指针
    cout << "重新解释转换 " <<  m  << " , " << n << " , " << f4 <<  " , " << f4 << " , " << &f4 <<endl;

}





