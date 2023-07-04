//
// Created by 杨充 on 2023/5/29.
//

#include <printf.h>

int A = 10;
int B = 20;
char buy;
int sum, number;

int main() {
    int num;
    printf("输入一个数字 : ");
    scanf("%d", &num);
    //? : 运算符(三元运算符)
    (num % 2 == 0) ? printf("偶数") : printf("奇数");
    printf("\n");

    printf("以下是本店的商品及价格：\n A 商品每个十元；\n B 商品每个二十元；\n\n");
    printf("请输入你所需的产品(A 或 B):");
    scanf("%c", &buy);
    printf("请输入所需的数量：");
    scanf("%d", &number);
    sum = buy == 'A' ? A * number : B * number;
    printf("\n你所需要的%d个%c商品总共%d元。\n", number, buy, sum);


    //switch语句一般形式：
    int a;
    printf("input integer number: ");
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("error\n");
    }
}