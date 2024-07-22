//
// Created by 杨充 on 2023/12/27.
//

#ifndef YCSTUDYC_STUMANAGER_H
#define YCSTUDYC_STUMANAGER_H

#endif //YCSTUDYC_STUMANAGER_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


//定义学生结构体
struct student {
    //学号
    int num;
    //姓名
    char name[20];
    //分数
    int score;
} Student;

//定义学生node节点
typedef struct _Node {
    struct student stu;
    //指针
    struct _Node *next;
} Node;


void welcome();
void scanChar(Node *head);
void inputStudent(Node* node);
void printStudent(Node* node);
void countStudent(Node* head);
void findStudent(Node* head);
void modifyStudent(Node* head);
void deleteStudent(Node* head);
void sortStudent(Node* head);
void exitSystem();
void saveStudent(Node* head);
void loadStudent(Node* head);
