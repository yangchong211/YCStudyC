//
// Created by 杨充 on 2023/6/8.
//

//C++ 数据结构
//C/C++ 数组允许定义可存储相同类型数据项的变量，但是结构是 C++ 中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。


#include <iostream>
using namespace std;

//为了定义结构，您必须使用 struct 语句。
//struct 语句定义了一个包含多个成员的新的数据类型，struct 语句的格式如下：
struct Books{
    char title[50];
    string author;
    char subject[50];
    int book_id;
};

//访问结构成员
void test1();
//结构作为函数参数
void test2();
//指向结构的指针
void test3();
void test4();
//结构作为函数参数
void printBook(struct Books book);
void printBook2(struct Books *book);

int main(){
    test1();
    test2();
    test3();
    test4();
    return 0;
}

void test1(){
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

void test2(){
    Books Book1;        // 定义结构体类型 Books 的变量 Book1

    // Book1 详述
    strcpy( Book1.title, "C++ 教程");
    Book1.author = "yangchong";
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 12345;

    printBook(Book1);
    cout << "\n";
}

//指向结构的指针
void test3(){
    Books Book1;
    strcpy( Book1.title, "C++ 教程");
    Book1.author = "yangchong";
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 12345;
    printBook2(&Book1);
    cout << "\n";
}

void test4(){

}

//结构作为函数参数
//您可以把结构作为函数参数，传参方式与其他类型的变量或指针类似。您可以使用上面实例中的方式来访问结构变量：
void printBook( struct Books book){
    cout << "书标题 : " << book.title <<endl;
    cout << "书作者 : " << book.author <<endl;
    cout << "书类目 : " << book.subject <<endl;
    cout << "书 ID : " << book.book_id <<endl;
};

void printBook2(struct Books *book) {
    cout << "书标题  : " << book->title << endl;
    cout << "书作者 : " << book->author << endl;
    cout << "书类目 : " << book->subject << endl;
    cout << "书 ID : " << book->book_id << endl;
}