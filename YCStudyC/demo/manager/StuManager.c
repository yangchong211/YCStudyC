//
// Created by 杨充 on 2023/12/27.
//

#include "StuManager.h"

_Bool isScan = true;


int main() {
    //在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。
    Node *node = malloc(sizeof(Node));
    node->next = NULL;
    loadStudent(node);
    welcome();
    while (isScan) {
        scanChar(node);
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
            modifyStudent(head);
            break;
            //删除学生信息
        case '6':
            deleteStudent(head);
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
    //创建结点
    Node *fresh = malloc(sizeof(Node));
    fresh->next = NULL;
    //输入用户信息
    printf("请输入学生的学号、姓名、成绩: \n");
    //输入内容 scan
    scanf("%d%s%d", &fresh->stu.num, fresh->stu.name, &fresh->stu.score);
    Node *move = node;
    //定义指针指向头结点，用于遍历链表
    while (move->next != NULL) {
        move = move->next;
    }
    //赋值
    move->next = fresh;

    saveStudent(node);
}


void printStudent(Node *node) {
    Node *move = node->next;
    while (move != NULL) {
        printf("学号：%d ， 姓名：%s，成绩：%d \n", move->stu.num, move->stu.name, move->stu.score);
        move = move->next;
    }
}

void countStudent(Node *head) {
    Node *move = head->next;
    int count = 0;
    while (move != NULL) {
        count = count + 1;
        move = move->next;
    }
    printf("学生的总人数是：%d \n", count);
}

void findStudent(Node *head) {
    Node *move = head->next;
    int number;
    printf("请输入要查找的学生学号：");
    scanf("%d", &number);
    while (move != NULL) {
        if (number == move->stu.num) {
            printf("找到了，学号:%d 姓名:%s 成绩:%d \n", move->stu.num, move->stu.name, move->stu.score);
            return;
        }
        move = move->next;
    }
    printf("没有找到该学生 %d \n", number);
}

//修改学生信息
void modifyStudent(Node *head) {
    Node *move = head->next;
    int number;
    printf("请输入要修改的学生学号：");
    scanf("%d", &number);
    while (move != NULL) {
        if (number == move->stu.num) {
            //找到了学生，接下来就是修改
            printf("请输入学生姓名，成绩\n");
            scanf("%s %d", move->stu.name, &move->stu.score);
            printf("修改学生信息成功\n");
            return;
        }
        move = move->next;
    }
}

//删除学生信息
void deleteStudent(Node *head) {
    Node *move = head->next;
    int number;
    printf("请输入要删除的学生学号：");
    scanf("%d" , &number);
    while (move != NULL) {
        if (number == move->stu.num) {
            //找到了学生，接下来就是删除

        }
        move = move->next;
    }
}

void exitSystem() {
    printf("推出学生系统\n");
    exit(0);
}

//保存文件
void saveStudent(Node *head) {
    FILE *file = fopen("./stu.info", "w");
    if (file == NULL) {
        printf("文件打开异常\n");
        return;
    }
    //中间写文件数据
    Node *move = head->next;
    while (move != NULL) {
        int i = fwrite(&move->stu, sizeof(Student), 1, file);
        if (i != 1) {
            printf("保存%s出现错误\n", move->stu.name);
        }
        move = move->next;
    }
    //关闭文件
    fclose(file);
}

//读取文件
void loadStudent(Node *head) {
    FILE *file = fopen("./stu.info", "r");
    if (file == NULL) {
        printf("未找到学生文件，跳过读取\n");
        return;
    }
    Node *move = head;
    //创建一个结点
    Node *fresh = malloc(sizeof(Node));
    fresh->next = NULL;
    while (fread(&fresh->stu, sizeof(Student), 1, file) == 1) {
        move->next = fresh;
        move = fresh;
        fresh = malloc(sizeof(Node));
        fresh->next = NULL;
    }
    free(fresh);
    //最后多定义一个fresh，要将它释放掉。关闭文件
    fclose(file);
    printf("读取成功\n");
}
