//
// Created by 杨充 on 2023/6/6.
//


#include <stdio.h>

void test1();
void test2();

//如何创建、打开、关闭文本文件或二进制文件。
int main() {
    test1();
    test2();
    return 0;
}

//写数据
void test1(){
    FILE *fp = NULL;
    //您可以使用 fopen( ) 函数来创建一个新的文件或者打开一个已有的文件
    //这个调用会初始化类型 FILE 的一个对象，类型 FILE 包含了所有用来控制流的必要的信息。
    //filename 是字符串，用来命名文件。访问模式 mode 的值
    //注意：请确保您有可用的 tmp 目录，如果不存在该目录，则需要在您的计算机上先创建该目录。
    fp = fopen("/Users/yc/c/YCStudyC/file/test1.txt", "w+");
    //可以使用 int fprintf(FILE *fp,const char *format, ...) 函数把一个字符串写入到文件中。
    fprintf(fp, "Yc This is testing for fprintf...\n");
    //函数 fputs() 把字符串 s 写入到 fp 所指向的输出流中。如果写入成功，它会返回一个非负值，如果发生错误，则会返回 EOF。
    fputs("Yc This is testing for fputs...\n", fp);
    //为了关闭文件，请使用 fclose( ) 函数
    fclose(fp);
    printf("关闭文件 \n");
}

//读数据
void test2(){
    FILE *fp = NULL;
    char buff[255];
    fp = fopen("/Users/yc/c/YCStudyC/file/test1.txt", "r");
    //可以使用 int fscanf(FILE *fp, const char *format, ...) 函数来从文件中读取字符串，但是在遇到第一个空格和换行符时，它会停止读取。
    fscanf(fp, "%s", buff);
    printf("1:%s\n", buff );
    fgets(buff, 255, (FILE*)fp);
    printf("2:%s\n", buff );
    fgets(buff, 255, (FILE*)fp);
    printf("3:%s\n", buff );
    fclose(fp);
}


