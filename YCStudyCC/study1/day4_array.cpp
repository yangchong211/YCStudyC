//
// Created by 杨充 on 2023/6/8.
//
#include <iostream>
#include <iomanip>


using namespace std;

//4.1.1 声明数组
void test1();

//4.1.2 初始化数组
void test2();

//4.1.3 访问数组元素
void test3();

//4.1.4 二维数组声明
void test4();

//4.1.5 指向数组的指针
void test5();

//4.1.6 传递数组给函数
void test6();

//4.1.7 从函数返回数组
void test7();

//4.2.1 为什么有Vector
void test8();

//4.2.2 Vector基础函数
void test9();

//4.4.1 C 风格字符串
void test4_1();

//4.4.2 函数处理字符串
void test4_2();

//4.4.3 C++中String类
void test4_3();

//4.4.4 输入字符串
void test4_4();

int main() {
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();
//    test6();
//    test7();
//    test8();
//    test9();
    test4_1();
    test4_2();
    test4_3();
    test4_4();
    return 0;
}


//声明数组
//在 C++ 中要声明一个数组，需要指定元素的类型和元素的数量，如下所示：
void test1() {
    //这叫做一维数组。arraySize 必须是一个大于零的整数常量，type 可以是任意有效的 C++ 数据类型。
    //例如，要声明一个类型为 double 的包含 10 个元素的数组 balance，声明语句如下：
    double balance[10];
    //*表示指针
    //&表示地址值
    cout << "声明数组: " << balance << " , " << *balance << " , " << &balance << endl;
    //声明数组: 0x16d85b558 , 3.47822e-321 , 0x16d85b558
}


//初始化数组
//在 C++ 中，您可以逐个初始化数组，也可以使用一个初始化语句，如下所示：
void test2() {
    double balance1[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    //大括号 { } 之间的值的数目不能大于我们在数组声明时在方括号 [ ] 中指定的元素数目。
    //如果您省略掉了数组的大小，数组的大小则为初始化时元素的个数。因此，如果：
    double balance2[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    //下面这种就是错误的。不能超过数据定义的长度
    //double balance3[3] = {1000.0, 2.0, 3.4, 7.0, 50.0};

    //您将创建一个数组，它与前一个实例中所创建的数组是完全相同的。下面是一个为数组中某个元素赋值的实例：
    balance2[4] = 50.0;
    //上述的语句把数组中第五个元素的值赋为 50.0。所有的数组都是以 0 作为它们第一个元素的索引，也被称为基索引，数组的最后一个索引是数组的总大小减去 1。
    cout << "初始化数组: " << balance1 << " , " << balance1[3] << " , " << &balance1[3] << endl;
    //初始化数组: 0x16b277580 , 7 , 0x16b277598
}

//访问数组元素
//数组元素可以通过数组名称加索引进行访问。元素的索引是放在方括号内，跟在数组名称的后边。例如：
//double salary = balance[9];
void test3() {
    int n[10]; // n 是一个包含 10 个整数的数组
    // 初始化数组元素
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100; // 设置元素 i 为 i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;
    // 输出数组中每个元素的值
    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
}


//https://www.runoob.com/cplusplus/cpp-multi-dimensional-arrays.html
void test4() {

}

//https://www.runoob.com/cplusplus/cpp-pointer-to-an-array.html
void test5() {

}

//https://www.runoob.com/cplusplus/cpp-passing-arrays-to-functions.html
void test6() {

}

//https://www.runoob.com/cplusplus/cpp-return-arrays-from-function.html
void test7() {

}

//为什么有Vector
//Array 是固定大小的，不能额外增加元素.当我们想定义不固定大小的字符时,可以使用 vector(向量) 标准库。
//向量（Vector）是一个封装了动态大小数组的顺序容器（Sequence Container）。
//跟任意其它类型容器一样，它能够存放各种类型的对象。可以简单的认为，向量是一个能够存放任意类型的动态数组。
//Vector(向量): C++ 中的一种数据结构，确切的说是一个类。它相当于一个动态的数组，当程序员无法知道自己需要的数组的规模多大时，用其来解决问题可以达到最大节约空间的目的。
void test8() {
    // 创建向量用于存储整型数据
    vector<int> vec;
    int i;
    // 显示 vec 初始大小
    cout << "vector size = " << vec.size() << endl;
    // 向向量 vec 追加 5 个整数值
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }
    // 显示追加后 vec 的大小
    cout << "extended vector size = " << vec.size() << endl;
}


//基本函数实现
//1.构造函数
//vector():创建一个空vector
//vector(int nSize):创建一个vector,元素个数为nSize
//vector(int nSize,const t& t):创建一个vector，元素个数为nSize,且值均为t
//vector(const vector&):复制构造函数
//vector(begin,end):复制[begin,end)区间内另一个数组的元素到vector中
//2.增加函数
//void push_back(const T& x):向量尾部增加一个元素X
//iterator insert(iterator it,const T& x):向量中迭代器指向元素前增加一个元素x
//iterator insert(iterator it,int n,const T& x):向量中迭代器指向元素前增加n个相同的元素x
//iterator insert(iterator it,const_iterator first,const_iterator last):向量中迭代器指向元素前插入另一个相同类型向量的[first,last)间的数据
//3.删除函数
//iterator erase(iterator it):删除向量中迭代器指向元素
//iterator erase(iterator first,iterator last):删除向量中[first,last)中元素
//void pop_back():删除向量中最后一个元素
//void clear():清空向量中所有元素
//4.遍历函数
//reference at(int pos):返回pos位置元素的引用
//reference front():返回首元素的引用
//reference back():返回尾元素的引用
//iterator begin():返回向量头指针，指向第一个元素
//iterator end():返回向量尾指针，指向向量最后一个元素的下一个位置
//reverse_iterator rbegin():反向迭代器，指向最后一个元素
//reverse_iterator rend():反向迭代器，指向第一个元素之前的位置
//5.判断函数
//bool empty() const:判断向量是否为空，若为空，则向量中无元素
//6.大小函数
//int size() const:返回向量中元素的个数
//int capacity() const:返回当前向量所能容纳的最大元素值
//int max_size() const:返回最大可允许的vector元素数量值
//7.其他函数
//void swap(vector&):交换两个同类型向量的数据
//void assign(int n,const T& x):设置向量中前n个元素的值为x
//void assign(const_iterator first,const_iterator last):向量中[first,last)中元素设置成当前向量元素
void test9() {
    vector<int> obj; //创建一个向量存储容器 int
    for (int i = 0; i < 10; ++i) {
        obj.push_back(i);
        cout << "vector = " << obj[i] << ",";
    }
    //去掉数组最后一个数据
    for (int i = 0; i < 5; i++) {
        obj.pop_back();
    }
    cout << "vector = " << "\n" << endl;
    //size()容器中实际数据个数
    for (int i = 0; i < obj.size(); i++) {
        cout << "vector = " << obj[i] << ",";
    }
    //排序
    reverse(obj.begin(), obj.end());//从大到小
    for (int i = 0; i < obj.size(); i++) {
        cout << "vector = " << obj[i] << ",";
    }
    cout << "\n" << endl;
    //访问（直接数组访问&迭代器访问）
}


//C 风格字符串
//C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 \0 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
void test4_1() {
    char site1[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    char site2[] = "RUNOOB";
    cout << "菜鸟教程: ";
    cout << site1 << "\n" << endl;
    cout << site2 << "\n" << endl;
}


//C++ 中有大量的函数用来操作以 null 结尾的字符串:
void test4_2() {
    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    int len;

    // 复制 str1 到 str3
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;
    // 连接 str1 和 str2。连接字符串 s2 到字符串 s1 的末尾。
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;
    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
    //如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
    int isEqual = strcmp(str1, str2);
    cout << "strcmp(str1) : " << isEqual << endl;
}

//C++ 标准库提供了 string 类类型，支持上述所有的操作，另外还增加了其他更多的功能。我们将学习 C++ 标准库中的这个类，现在让我们先来看看下面这个实例：
void test4_3() {
    string str1 = "yangchong";
    string str2 = "tangxinyi";
    string str3;
    int len;
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

//cin.getline() 是在输入一段字符完成后开始读取数据（注意，是输入完成后，以Enter为结束标志）
void test4_4() {
    int N = 100;
    char X[N];
    cin.getline(X, N);                               //以cin.getline形式输入
    int a = 0, b = 0;
    for (int i = 0; i < N; i++) {
        if (X[i] == '#')                                      //为#为结束标志
            break;
        if (X[i] >= '0' && X[i] <= '9')
            a++;                                         //统计数字个数
        if ((X[i] >= 'a' && X[i] <= 'z') || (X[i] >= 'A' && X[i] <= 'Z'))
            b++;                                      //统计英文字母个数
    }
    cout << "数字个数：" << a << "，字母个数：" << b << endl;
}

