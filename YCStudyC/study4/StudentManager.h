//
// Created by 杨充 on 2023/10/19.
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


//定义学生结构体
typedef struct _Student {
    //学号
    int stuNum;
    //姓名
    char name[20];
    //分数
    int score;
} Student;


//定义节点结构体
typedef struct _Node {
    //学生
    Student stu;
    //指针
    struct _Node *next;
} Node;


void welcome();

void scanChar(Node *head);

void inputStudent(Node *node);

void printStudent(Node *node);

void countStudent(Node *head);

void findStudent(Node *head);

void modifyStudent(Node *head);

void deleteStudent(Node *head);

void sortStudent(Node *head);

void exitSystem();

void saveStudent(Node *head);

void loadStudent(Node *head);