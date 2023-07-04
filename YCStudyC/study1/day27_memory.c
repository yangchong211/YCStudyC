//
// Created by 杨充 on 2023/6/6.
//

//内存管理
//在 C 语言中，内存是通过指针变量来管理的。指针是一个变量，它存储了一个内存地址。
//这个内存地址可以指向任何数据类型的变量，包括整数、浮点数、字符和数组等。

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//动态分配内存
void test1();

//重新调整内存的大小和释放内存
void test2();

int main() {
    test1();
    test2();
    return 0;
}

//如果您预先不知道需要存储的文本长度，例如您想存储有关一个主题的详细描述。
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











