//
// Created by 杨充 on 2023/7/11.
//

#include <stdio.h>

void test0();

void test1();

void test2();

//ASCII 定义了 128 个字符。
//分类：
//一：0-31、127（删除键）是控制字符
//二：空白字符：空格（32）、 制表符、 垂直制表符、 换行、 回车。
//三：可显示字符：a-z、A-Z、0-9、~、！、@、、%、^、&、#、$、*、（、）、-、+、{、}、[、]、'、"、<、>、，、？、/、|、\、_、：、;、.，还有顿号、。
int main() {
    test0();
    test1();
    test2();
    return 0;
}

void test0() {
    char c;
    printf("请输入一个字符");
    scanf("%c" ,&c);
    // %d 显示整数
    // %c 显示对应字符
    printf("%c 的 ASCII 为 %d \n", c, c);
}

/**
 * 可以一次读取长字符，并一个一个显示 ASCII 码
 */
#define MAX_LENGTH 65535
void test1() {
    char s[MAX_LENGTH];
    printf("请输入长度小于 %d 的任意字符：",MAX_LENGTH);
    scanf("%s",s);    // 读取字符串。
    for (int i = 0; s[i]; i++) {
        char ch = s[i];
        printf("%c 的ASCII 为 %d \n" , ch ,ch);
    }
}

void test2() {

}