//
// Created by 杨充 on 2024/7/22.
//

#include "Stu.h"


int main() {
    Node *head = malloc(sizeof(Node));
    head->next = NULL;
    welcome();
    while (1) {
        scanChar(head);
    }
    return 0;
}


void welcome() {
    printf("*********************************\n");
    printf("*\t学生成绩管理系统\t*\n");
    printf("*********************************\n");
    printf("*\t请选择功能列表\t\t*\n");
    printf("*********************************\n");
    printf("*\t1.录入学生信息\t\t*\n");
    printf("*\t2.打印学生信息\t\t*\n");
    printf("*\t3.统计学生人数\t\t*\n");
    printf("*\t4.查找学生信息\t\t*\n");
    printf("*\t5.修改学生信息\t\t*\n");
    printf("*\t6.删除学生信息\t\t*\n");
    printf("*\t7.学生成绩排序\t\t*\n");
    printf("*\t8.推出学生系统\t\t*\n");
    printf("*********************************\n");
}


void scanChar(Node *head) {
    char c = getchar();
    switch (c) {
        //录入学生信息
        case '1':
            inputStudent(head);
            break;
            //打印学生信息
        case '2':
            printStudent(head);
            break;
            //统计学生人数
        case '3':
            countStudent(head);
            break;
            //查找学生信息
        case '4':
            findStudent(head);
            break;
            //修改学生信息
        case '5':

            break;
            //删除学生信息
        case '6':

            break;
            //按照成绩排序
        case '7':

            break;
            //推出系统
        case '8':
            exitSystem();
            break;
        default:
            printf("其他无效数字\n");
            break;
    }
}

void inputStudent(Node *node) {
    Node *fresh = malloc(sizeof(Node));
    fresh->next = NULL;
    printf("请输入学生的学号、姓名、成绩: \n");
    scanf("%d%s%d", &fresh->stu.num, fresh->stu.name, &fresh->stu.score);
    Node *move = node;
    while (move->next != NULL) {
        move = move->next;
    }
    //将学生插入到尾部
    move->next = fresh;
}


void printStudent(Node *node) {
    Node *move = node->next;
    while (move != NULL) {
        printf("学号:%d 姓名:%s 成绩:%d \n", move->stu.num, move->stu.name, move->stu.score);
        move = move->next;
    }
}

void countStudent(Node *head) {
    int count = 0;
    Node *move = head->next;
    while (move != NULL) {
        move = move->next;
        count++;
    }
    printf("学生总人数为:%d\n", count);
}



void findStudent(Node *head) {
    //通过输入学号去查信息
    int num;
    printf("请输入要查找的学生学号：");
    scanf("%d", &num);
    Node *move = head->next;
    while (move != NULL) {
        if (move->stu.num == num) {
            return;
        }
        move = move->next;
    }
    printf("没有查找到学生信息\n");
}

void exitSystem() {
    system("clear");
    printf("推出学生系统\n");
    exit(0);
}