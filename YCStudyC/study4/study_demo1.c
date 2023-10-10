//
// Created by 杨充 on 2023/10/10.
//


#include <stdio.h>

int main() {
    printf("有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？");
    int l, m, n;
    printf("\n");
    for (int l = 0; l < 5; ++l) {
        for (int m = 0; m < 5; ++m) {
            for (int n = 0; n < 5; ++n) {
                //保证三个数不相同
                if (l != m && l != n && m != n) {
                    printf("%d , %d , %d \n", l, m, n);
                }
            }
        }
    }
}