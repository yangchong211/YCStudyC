//
// Created by 杨充 on 2023/5/30.
//
// C 循环语句

#include <printf.h>

int main() {

    //while 循环
    /* 局部变量定义 */
    int a = 10;
    /* while 循环执行 */
    while (a < 20) {
        printf("while a 的值： %d\n", a);
        a++;
    }

    /* for 循环执行 */
    for (int a = 10; a < 20; a = a + 1) {
        printf("for a 的值： %d\n", a);
    }

    /* do 循环执行，在条件被测试之前至少执行一次 */
    a = 10;
    do {
        printf("a 的值： %d\n", a);
        a = a + 1;
    } while (a < 20);



    return 0;
}