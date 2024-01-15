//
// Created by 杨充 on 2023/6/6.
//

//内存管理
//在 C 语言中，内存是通过指针变量来管理的。指针是一个变量，它存储了一个内存地址。
//这个内存地址可以指向任何数据类型的变量，包括整数、浮点数、字符和数组等。

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void test0();
//动态分配内存
void test1();
//重新调整内存的大小和释放内存
void test2();

void test3();


//1	void *calloc(int num, int size);
//在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是 0。
//2	void free(void *address);
//该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。
//3	void *malloc(int num);
//在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
//4	void *realloc(void *address, int newsize);
//该函数重新分配内存，把内存扩展到 newsize。
int main() {
    test0();
    test1();
    test2();
    return 0;
}


void test0() {
    //动态内存，超过了怎么班
    char name[100];
    //1.内存如何管理？通过指针变量来管理
    char *des;
    //通过字符串拷贝完成赋值
    strcpy(name , "逗比充");
    //动态分配内存
    des = malloc(30 * sizeof(char));
    if (des == NULL) {
        //空指针
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(des, "Zara ali a DPS student in class 10th");
    }
    //重新分配内存大小
    des = realloc(des,100 * sizeof(char));
    if (des == NULL) {
        //空指针
        fprintf(stderr, "Error - unable to allocate required memory 1\n");
    } else {
        strcpy(des, "Zara ali a DPS student in class 10th 1");
    }

    //释放内存
    free(des);
}


//如果您预先不知道需要存储的文本长度，例如您想存储有关一个主题的详细描述。
//当动态分配内存时，您有完全控制权，可以传递任何大小的值。而那些预先定义了大小的数组，一旦定义则无法改变大小。
//在这里，我们需要定义一个指针，该指针指向未定义所需内存大小的字符，后续再根据需求来分配内存，如下所示：
void test1() {
    //动态分配内存。这个长度100
    //如果是超了怎么办？如果变量的长度大于声明的长度，则出现：Trace/BPT trap: 5
    char name2[100];
    //指针变量声明    类型 *变量名称
    char *description;
    //字符串拷贝
    strcpy(name2, "Zara Ali");
    /* 动态分配内存 */
    //void *malloc(int num);
    //在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
    description = (char *) malloc(200 * sizeof(char));
    //空指针判断
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name2);
    printf("Description: %s\n", description);
    //Name = Zara Ali
    //Description: Zara ali a DPS student in class 10th
}


//当程序退出时，操作系统会自动释放所有分配给程序的内存，但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。
//或者，您可以通过调用函数 realloc() 来增加或减少已分配的内存块的大小。
void test2() {
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");
    /* 动态分配内存 */
    description = (char *) malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student.");
    }
    /* 假设您想要存储更大的描述信息 */
    description = (char *) realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    /* 使用 free() 函数释放内存 */
    free(description);
}











