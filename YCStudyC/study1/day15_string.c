//
// Created by 杨充 on 2023/6/4.
//

#include <printf.h>
#include <string.h>

//char site1[7] = {"R" , 'R' , "N" , "O" , "O" , "B" , '\0'};
char site2[] = "RUNOOB";
char site3[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};

void string1();

int main() {
    printf("菜鸟教程1：%s\n", site3);
    printf("菜鸟教程2：%s\n", site2);
    string1();
    return 0;
}

void string1() {
    char str1[14] = "runoob";
    char str2[14] = "google1";
    char str3[14];
    strcpy(str3 , str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );

    /* 连接 str1 和 str2 */
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );

    /* 连接后，str1 的总长度 */
    int len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );
}



