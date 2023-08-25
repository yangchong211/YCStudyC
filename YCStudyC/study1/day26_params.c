//
// Created by 杨充 on 2023/6/6.
//

//有时，您可能会碰到这样的情况，您希望函数带有可变数量的参数，而不是预定义数量的参数。
#include "stdarg.h"
#include "printf.h"

//省略号 ... 表示可变参数列表。
//int func_name(int arg1,  ...);
int average(int num , ...);

int main(){
//    func_name(2,3,4);
//    func_name(2,3,4,5);
    average(3,3,4,5);
    return 0;
}

//num可变参数的长度
//输出5, 10, 15的平均数
int average(int num ,  ...) {
    double sum = 0.0;
    int i;

    va_list vaList;
    va_start(vaList,num);

    //求所有数据的和
    for (int j = 0; j < num; j++) {
        sum = sum + va_arg(vaList,int);
    }
    printf("打印sum = %f \n" , sum);

    va_end(vaList);
    double d = sum / num;
    printf("打印average = %f \n" , d);
    return d;
}






