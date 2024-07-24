//
// Created by 杨充 on 2023/10/19.
//

//添加头文件
#include "StudentManager.h"

//头文件`stdbool.h`定义了另一个类型别名`bool`，并且定义了`true`代表`1`、`false`代表`0`。只要加载这个头文件，就可以使用这几个关键字。
_Bool isScan = true;

int main() {
    //创建头节点
    Node *head = malloc(sizeof(Node));
    head->next = NULL;
    //从本地取数据
    loadStudent(head);
    welcome();
    while (isScan) {
        scanChar(head);
    }
    return 0;
}

void scanChar(Node *head) {
    /* 等待从键盘接收一个字符, 输入字符后，回车才能录入，注意：回车符号会被存储至缓存区，下次 循环导致获取到回车
     * char c = getchar();
     * getchar(); 吸收回车
     * getch:不需要回车，直接获取输入的字符，需要包含conio.h头文件，2022之前的版本需要使用 _getch()
     */
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
            sortStudent(head);
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

void inputStudent(Node *node) {
    //printf("插入学生 %d , %s ,%d \n" , node->stu.score , node->stu.name , node->stu.stuNum);
    //创建结点
    Node *fresh = malloc(sizeof(Node));
    fresh->next = NULL;
    //输入用户信息
    printf("请输入学生的学号、姓名、成绩: \n");
    //scanf("%d%s%d" , &fresh->stu.stuNum , &fresh->stu.name , &fresh->stu.score);
    scanf("%d%s%d", &fresh->stu.stuNum, fresh->stu.name, &fresh->stu.score);
    //定义指针指向头结点，用于遍历链表
    Node *move = node;
    while (move->next != NULL) {
        move = move->next;
    }
    //将学生插入到尾部
    move->next = fresh;
    //按下任意键后，会继续执行程序
    //作用和效果就是dos下的pause
    //system("PAUSE");   和system("pause");   作用和效果一样，因为dos命令是不区分大小写的。
    //system("PAUSE")  是暂停的意思，等待用户信号；不然控制台程序会一闪即过，你来不及看到执行结果。
    //pause是DOS下的一个命令。功能是：暂停批处理的执行，显示一个中文信息：“请按任意键继续. . .”，或者英文信息：“Press any key to continue . . .”
    //system("pause");
    //sh: pause: command not found
    //忘记了system函数（系统调用）是干啥的，其实是可以用的，系统调用就等于在Terminal中输入“指令”，
    //但是,在Mac系统里使用的是Terminal命令,所以，这个命令在Mac系统里不存在，只会提示command not found。



    //暂停程序
    //pause();
    //程序执行到此处会暂停一秒
    //sleep(5);

    saveStudent(node);

    //system("clear");
}


void printStudent(Node *node) {
    printf("2.打印学生信息");
    Node *move = node->next;
    while (move != NULL) {
        printf("学号:%d 姓名:%s 成绩:%d \n", move->stu.stuNum, move->stu.name, move->stu.score);
        move = move->next;
    }
//    pause();
    //mac下c语言里面无法运行system语句
    //在Mac系统里system函数使用的是Terminal命令
    //所以，这个命令在Mac系统里不存在
    //通俗点说：你在程序里使用“system("cls")”就等于在Terminal中输入“cls”
//    system("cls");
    system("clear");
}


void countStudent(Node *head) {
    int count = 0;
    Node *move = head->next;
    while (move != NULL) {
        move = move->next;
        count++;
    }
    printf("学生总人数为:%d\n", count);
    //system("pause");
}

void findStudent(Node *head) {
    int number;
    printf("请输入要查找的学生学号：");
    scanf("%d", &number);
    Node *move = head->next;
    while (move != NULL) {
        if (move->stu.stuNum == number) {
            printf("学号:%d 姓名:%s 成绩:%d\n", move->stu.stuNum, move->stu.name, move->stu.score);
            return;
        }
        move = move->next;
    }
    printf("没有查找到学生信息\n");
}


void modifyStudent(Node *head) {
    int number;
    printf("请输入要修改的学生学号：");
    scanf("%d", &number);
    Node *move = head;
    while (move != NULL) {
        if (move->stu.stuNum == number) {
            printf("请输入学生姓名，成绩\n");
            scanf("%s%d", move->stu.name, &move->stu.score);
            printf("修改学生信息成功\n");
            break;
        }
        move = move->next;
    }
    if (move == NULL) {
        printf("未找到学生信息\n");
    }
    saveStudent(head);
}

void deleteStudent(Node *head) {
    int number;
    printf("请输入要删除的学生学号：");
    scanf("%d", &number);
    Node *move = head;
    //如何删除链表
    while (move != NULL) {
        if (move->stu.stuNum == number) {
            //删除节点
            Node *temp = move->next;
            move->next = move->next->next;
            free(temp);
            //将节点设置成null
            temp = NULL;
            break;
        }
        move = move->next;
    }
    if (move == NULL) {
        printf("未找到学生信息\n");
    }
}

void sortStudent(Node *head) {
    Node *save = NULL;
    Node *move = NULL;
    for (Node *turn = head->next; turn->next != NULL; turn = turn->next) {
        for (move = head->next; move->next != save; move = move->next) {
            if (move->stu.score > move->next->stu.score) {
                Student temp = move->stu;
                move->stu = move->next->stu;
                move->next->stu = temp;
            }
        }
        save = move;
    }
    printStudent(head);
}

void exitSystem() {
    system("clear");
    printf("推出学生系统\n");
    exit(0);
}


//保存文件
void saveStudent(Node *head) {
    //打开文件
    FILE *file = fopen("./stu.info", "w");
    if (file == NULL) {
        printf("打开文件失败\n");
        return;
    }
    Node *move = head->next;
    while (move != NULL) {
        //将数据写到file文件中
        int i = fwrite(&move->stu, sizeof(Student), 1, file);
        if (i != 1) {
            printf("保存%s出现错误\n", move->stu.name);
        }
        move = move->next;
    }
    //关闭文件
    fclose(file);
};

void loadStudent(Node *head) {
    FILE *file = fopen("./stu.info", "r");
    if (file == NULL) {
        printf("未找到学生文件，跳过读取\n");
        return;
    }
    //创建一个结点
    Node *fresh = malloc(sizeof(Node));
    fresh->next = NULL;
    Node *move = head;
    //不断读取文件
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
};