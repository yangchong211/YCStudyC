//
// Created by 杨充 on 2023/6/8.
//

#include <iostream>
using namespace std;

//8.1.1.1 为何设计结构
void test8_1_1_1();
//8.1.1.2 定义结构
void test8_1_1_2();
//8.1.1.3 访问结构成员
void test8_1_1_3();
//8.1.2.1 结构作为函数参数
void test8_1_2_1();
//8.1.2.2 指向结构的指针
void test8_1_2_2();
//8.1.2.3 typedef结构方式
void test8_1_2_3();
//8.1.2.4 . 与 -> 运算符
void test8_1_2_4();
//8.1.2.5 结构作为函数返回值
void test8_1_2_5();
//结构作为函数参数
void printBook(struct Books book);
void printBook2(struct Books *book);
//8.2.1.1 类概述
void test8_2_1_1();
//8.2.1.2 类的声明与定义
void test8_2_1_2();
//8.2.1.4 对象的声明
void test8_2_1_4();

int main() {
//    test8_1_1_1();
//    test8_1_1_2();
//    test8_1_1_3();
//    test8_1_2_1();
//    test8_1_2_2();
//    test8_1_2_3();
//    test8_1_2_4();
    test8_1_2_5();
    test8_2_1_1();
    test8_2_1_2();
    test8_2_1_4();
    return 0;
}

void test8_1_1_1(){
    //C/C++ 数组允许定义可存储相同类型数据项的变量，但是结构是 C++ 中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。
    //结构用于表示一条记录，假设您想要跟踪图书馆中书本的动态，您可能需要跟踪每本书的下列属性：
    //Title ：标题
    //Author ：作者
    //Subject ：类目
    //Book ID ：书的 ID
}

struct Books{
    char title[50];
    string author;
    char subject[50];
    int book_id;
    char parity;
};

void test8_1_1_2(){
    //为了定义结构，您必须使用 struct 语句。
    //struct 语句定义了一个包含多个成员的新的数据类型，struct 语句的格式如下：
}

void test8_1_1_3(){
    Books Book1;        // 定义结构体类型 Books 的变量 Book1
    // Book1 详述
    strcpy( Book1.title, "C++ 教程");
    Book1.author = "yangchong";
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 12345;

    // 输出 Book1 信息
    cout << "第一本书标题 : " << Book1.title <<endl;
    cout << "第一本书作者 : " << Book1.author <<endl;
    cout << "第一本书类目 : " << Book1.subject <<endl;
    cout << "第一本书 ID : " << Book1.book_id <<endl;
    cout << "\n";
}

void test8_1_2_1(){
    Books book1 = Books();
    book1.book_id = 12345;
    //book1.subject = subject.c_str();
    strcpy( book1.subject, "编程语言");
    book1.author = "yangchong";
    strcpy( book1.title, "C++ 教程");
    book1.parity = 'N';
    printBook(book1);
    cout << "\n";
}

void test8_1_2_2(){
    Books Book1;
    strcpy( Book1.title, "C++ 教程");
    Book1.author = "yangchong";
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 12345;
    // 通过传 Book1 的地址来输出 Book1 信息
    printBook2(&Book1);
    cout << "\n";
}

typedef struct Books2{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} BooksYc;

void test8_1_2_3(){
//    Books Book1, Book2;
    BooksYc Book1, Book2;
}

//结构作为函数参数
//您可以把结构作为函数参数，传参方式与其他类型的变量或指针类似。您可以使用上面实例中的方式来访问结构变量：
void printBook( struct Books book){
    cout << "书标题 : " << book.title <<endl;
    cout << "书作者 : " << book.author <<endl;
    cout << "书类目 : " << book.subject <<endl;
    cout << "书 ID : " << book.book_id <<endl;
}

//该函数以结构指针作为参数
void printBook2(struct Books *book) {
    cout << "书标题2  : " << book->title << endl;
    cout << "书作者2 : " << book->author << endl;
    cout << "书类目2 : " << book->subject << endl;
    cout << "书 ID2 : " << book->book_id << endl;
}

void test8_1_2_4() {
    //. 与 -> 运算符
    //.（点）运算符和 ->（箭头）运算符用于引用类、结构和共用体的成员: 点运算符应用于实际的对象。箭头运算符与一个指向对象的指针一起使用。
    struct Employee {
        char first_name[16];
        int  age;
    } emp;
    Employee *p_emp;
    //. 点运算符
    strcpy(emp.first_name, "zara");
    //-> 箭头运算符     -> 称为箭头运算符，它是由一个减号加上一个大于号组成。
    strcpy(p_emp->first_name, "zara");
    //访问结构的成员时使用点运算符，而通过指针访问结构的成员时则使用箭头运算符。
}

struct test{
    int i;
    char c;
    double d;
    float f;
};

struct test set( int a, float b, char c, double d ){
    struct test t;
    t.i = a;
    t.f = b;
    t.c = c;
    t.d = d;
    return t;
}

void print(struct test t2){
    printf("int:%d\n",t2.i);
    printf("char:%c\n",t2.c);
    printf("float:%f\n",t2.f);
    printf("double:%lf\n",t2.d);
}
void test8_1_2_5(){
    struct test info;
    info = set(2,3.22,'d',4.335);
    print(info);
}

void test8_2_1_1(){
    //C++ 在 C 语言的基础上增加了面向对象编程，C++ 支持面向对象程序设计。类是 C++ 的核心特性，通常被称为用户定义的类型。
    //类用于指定对象的形式，是一种用户自定义的数据类型，它是一种封装了数据和函数的组合。
    //类中的数据称为成员变量，函数称为成员函数。
    //类可以被看作是一种模板，可以用来创建具有相同属性和行为的多个对象。
}

void test8_2_1_2(){
    //定义一个类需要使用关键字 class，然后指定类的名称，并类的主体是包含在一对花括号中，主体包含类的成员变量和成员函数。
    //定义一个类，本质上是定义一个数据类型的蓝图，它定义了类的对象包括了什么，以及可以在这个对象上执行哪些操作。
    class Box{
    public:
        double length;   // 盒子的长度
        double breadth;  // 盒子的宽度
        double height;   // 盒子的高度
    };
    //关键字 public 确定了类成员的访问属性。在类对象作用域内，公共成员在类的外部是可访问的。
    //您也可以指定类的成员为 private 或 protected，这个我们稍后会进行讲解。
}

//8.2.1.4 对象的声明
void test8_2_1_4() {
    class Box{
    public:
        double length;   // 盒子的长度
        double breadth;  // 盒子的宽度
        double height;   // 盒子的高度
    };
    Box Box1;          // 声明 Box1，类型为 Box
    Box Box2;          // 声明 Box2，类型为 Box
}







