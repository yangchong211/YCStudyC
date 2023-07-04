//
// Created by 杨充 on 2023/6/1.
//

#include <printf.h>

int max(int , int);

int main() {
    //& 可以省略
    int (*p) (int , int) = & max;
    int a , b , c , d;
    printf("请输入三个数字:");
    scanf("%d %d %d" , &a , &b , &c);
    d = p(p(a , b) , c);
    printf("最大的数字是: %d\n" , d);
    return 0;
}

int max(int x , int y){
    return x > y ? x : y;
}
