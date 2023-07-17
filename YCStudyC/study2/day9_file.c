//
// Created by 杨充 on 2023/7/17.
//

#include <stdio.h>

void test0();
void test1();
void test2();

int main() {
    test0();
    test1();
    test2();
    return 0;
}

//输出当前文件执行代码，__FILE__ 为当前执行的文件常量。
void test0() {
    FILE *fp;
    fp = fopen(__FILE__,"r");
    char c;
    do {
        c = getc(fp);
        putchar(c);
    } while (c != EOF);
    fclose(fp);
}

void test1() {

}


void test2() {

}