//
// Created by 杨充 on 2023/7/24.
//

#include <stdio.h>

void test1();

int main() {
    test1();
    return 0;
}

//计算两个时间段的差值
//输入小时、分钟、秒：12 34 55
struct TIME {
    //结构体
    int second;
    int minutes;
    int hours;
};

void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);


void test1() {
    struct TIME startTime, stopTime, diff;
    printf("请输入开始时间：\n");
    printf("请输入小时，分钟，秒：\n");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.second);


    printf("请输入结束时间：\n");
    printf("请输入小时，分钟，秒：\n");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.second);

    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\n差值: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.second);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.second);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.second);
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) {
    if (stop.second > start.second) {
        --start.minutes;
        start.second += 60;
    }

    diff->second = start.second - stop.second;
    if (stop.minutes > start.minutes) {
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}