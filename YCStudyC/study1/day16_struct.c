//
// Created by 杨充 on 2023/6/4.
//

#include <printf.h>
#include <string.h>

//Books是结构体标签
//books是结构变量
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"C 语言", "RUNOOB", "编程语言", 123456};

void printBook(struct Books books);

//结构体定义由关键字 struct 和结构体名组成，结构体名可以根据需要自行定义。
//结构体有点类似java中的类
int main() {
    printf("title : %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title, book.author, book.subject, book.book_id);
    //title : C 语言
    //author: RUNOOB
    //subject: 编程语言
    //book_id: 123456

    struct Books Book1;

    strcpy(Book1.title , "C Programming");
    strcpy(Book1.author , "YangChong");
    strcpy(Book1.subject , "C Programming Tutorial");
    Book1.book_id = 6495407;
    /* 输出 Book1 信息 */
    printf( "Book 1 title : %s\n", Book1.title);
    printf( "Book 1 author : %s\n", Book1.author);
    printf( "Book 1 subject : %s\n", Book1.subject);
    printf( "Book 1 book_id : %d\n", Book1.book_id);

    printBook(Book1);

    return 0;
}

void printBook(struct Books books){
    printf( "Book title : %s\n", books.title);
    printf( "Book author : %s\n", books.author);
    printf( "Book subject : %s\n", books.subject);
    printf( "Book book_id : %d\n", books.book_id);
}


struct {
    int a;
    char b;
    double c;
} s1;




