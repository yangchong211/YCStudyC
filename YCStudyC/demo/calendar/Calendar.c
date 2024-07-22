//
// Created by 杨充 on 2023/12/8.
//

#include "Calendar.h"

int year, month;
//闰年和平年   2月份天数不一样
int runnian[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int pingnian[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char weekday[7][10] = {"一", "二", "三", "四", "五", "六", "日"};


int main() {
    printCalendar();
    printBegin();
    int sum = daySum(year, month);
    printResult(sum, year, month);
    printStar();
    return 0;
}

//用户输入
void printCalendar() {
    //用户输入年 月
    printf("请输入年-月：");
    scanf("%d-%d", &year, &month);
}

//打印工作日
void printBegin() {
    printf("\t\t\t万年历\t\t\t\n");
    printStar();
    for (int i = 0; i < 7; i++) {
        printf("%s\t", weekday[i]);
    }
    printf("\n");
}

//打印星号
void printStar() {
    printf("*****************************************************\n");
}

//1900年1月1日是星期一，比较方便后面的计算
//我们需要算我们输入的年份离1900年有多少天
int daySum(int year, int month) {
    //1900 1 1 是星期一
    int i, sum = 0;
    //判断当前年份是闰年还是平年
    for (i = 1900; i < year; i++) {
        if (leap(i)) {
            sum += 366;
        } else {
            sum += 365;
        }
    }
    //i<month-1是因为我们不能将我们输入的月份计算在内
    for (i = 0; i < month - 1; i++) {
        if (leap(year) == 1) {
            sum += runnian[i];
        } else {
            sum += pingnian[i];
        }
    }
    return sum;
}

int leap(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void printResult(int sum, int year, int month) {
    //result为余数，temp为中间变量，i为循环变量
    int result, temp, i;
    //日历上前面空余的天数，就是总天数除以7的余数
    result = sum % 7;
    //把当前月份空余的天数用空格表示
    for (i = 0; i < result; i++) {
        printf("\t");
    }
    temp = 7 - result;//从第几格开始打印一号
    if (leap(year) == 1) {
        //数组下标从0开始
        //月份只能从1开始
        for (i = 1; i <= runnian[month - 1]; i++) {
            printf("%d\t", i);
            if (i == temp || (i - temp) % 7 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    } else {
        for (i = 1; i <= pingnian[month - 1]; i++) {
            printf("%d\t", i);
            if (i == temp || (i - temp) % 7 == 0) {
                printf("\n");
            }
        }
    }
    printf("\n");
}