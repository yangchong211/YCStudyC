#include <printf.h>

//
// Created by 杨充 on 2023/5/31.
//
enum DAY{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};
void setEnum();

int main(){
    enum DAY day;
    day = MON;
    printf("%d",day);


    //在C 语言中，枚举类型是被当做 int 或者 unsigned int 类型来处理的，所以按照 C 语言规范是没有办法遍历枚举类型的。
    //不过在一些特殊的情况下，枚举类型必须连续是可以实现有条件的遍历。
    // 遍历枚举元素
    for (day = MON; day <= SUN; day++) {
        printf("枚举元素：%d \n", day);
    }

    setEnum();
    return 0;
}

void setEnum(){
    enum color{red=1, green ,blue};
    enum color favorite_color;
    /* 用户输入数字来选择颜色 */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    scanf("%u", &favorite_color);
    switch (favorite_color) {
        case red:
            printf("你喜欢的颜色是红色");
            break;
        case green:
            printf("你喜欢的颜色是绿色");
            break;
        case blue:
            printf("你喜欢的颜色是蓝色");
            break;
        default:
            printf("你没有选择你喜欢的颜色");
            break;
    }
}