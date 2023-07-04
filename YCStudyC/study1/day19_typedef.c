//
// Created by 杨充 on 2023/6/5.
//

#include <printf.h>
#include <string.h>


//C 语言提供了 typedef 关键字，您可以使用它来为类型取一个新的名字。
//

typedef struct Books {
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} Book;

int main(){
    Book book;

    strcpy(book.title , "C 教程");
    strcpy(book.author , "YangChong");
    strcpy(book.subject , "编程语言");
    book.book_id = 12345;

    printf( "书标题 : %s\n", book.title);
    printf( "书作者 : %s\n", book.author);
    printf( "书类目 : %s\n", book.subject);
    printf( "书 ID : %d\n", book.book_id);
    return 0;
}









