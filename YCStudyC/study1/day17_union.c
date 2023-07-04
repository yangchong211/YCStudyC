//
// Created by 杨充 on 2023/6/4.
//

#include <printf.h>
#include <string.h>

// Data 类型的变量可以存储一个整数、一个浮点数，或者一个字符串。
// 这意味着一个变量（相同的内存位置）可以存储多个多种类型的数据。
union Data{
    int i;
    float f;
    char str[20];
};

void printData(union Data unionData);

int main(){
    union Data data;
    //printf( "Memory size occupied by data : %d\n", sizeof(data));
    printData(data);
    return 0;
}

void printData(union Data unionData){
    unionData.i = 10;
    unionData.f = 220.5f;
    //复制数据
    strcpy( unionData.str, "C Programming");

    printf( "data.i : %d\n", unionData.i);
    printf( "data.f : %f\n", unionData.f);
    printf( "data.str : %s\n", unionData.str);
}
