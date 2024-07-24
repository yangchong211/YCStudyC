//
// Created by 杨充 on 2024/7/22.
//

//标准输入输出
#include <stdio.h>
//动态申请内存
#include <stdlib.h>
#include <profile.h>
#include <unistd.h>
//mac 找不到该头文件，window独用
//#include <conio.h>
#include <stdbool.h>


typedef struct _Student {
    int num;
    char name[20];
    int score;
} Student;

typedef struct _Node {
    //学生
    Student stu;
    //指针
    struct _Node *next;
} Node;


void welcome();
void scanChar(Node *head) ;
void inputStudent(Node *node);
void printStudent(Node *node);
void countStudent(Node *head);
void findStudent(Node *head);
        void exitSystem();



