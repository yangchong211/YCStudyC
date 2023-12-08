//
// Created by 杨充 on 2023/12/8.
//

//标准输入输出
#include <stdio.h>
//动态申请内存
#include <stdlib.h>


//用户输入年月
void printCalendar();

//
void printBegin();


void printStar();


int daySum(int year, int month);

//判断闰年平年函数
int leap(int year);

//打印日历
void printResult(int sum, int year, int month);