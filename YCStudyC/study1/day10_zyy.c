//
// Created by 杨充 on 2023/5/31.
//

#include <printf.h>


//初始化局部变量和全局变量
//当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动对其初始化

//声明一个函数
void setVal();
void setVal1();
void setVal3();

int main(){
    //局部变量声明
    int a , b;
    int c;
    a = 10;
    b = 20;
    c = a + b;
    printf ("value of a = %d, b = %d and c = %d\n", a, b, c);

    setVal();
    setVal1();
    setVal3();
    return 0;
}

//函数主体
//全局变量
int g;
void setVal(){
    int a , b;
    a = 10;
    b = 20;
    g = a + b;
    printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
}


//局部变量和全局变量的名称可以相同，但是在函数内，如果两个名字相同，会使用局部变量值，全局变量不会被使用。
int g = 20;
void setVal1(){
    /* 局部变量声明 */
    int g = 10;
    printf ("value of g = %d\n",  g);
}


/* 全局变量声明 */
int a = 20;
void setVal3(){
    /* 在主函数中的局部变量声明 */
    int a = 10;
    int b = 20;
    int c = 0;
    int sum(int, int);
    printf ("value of a in main() = %d\n",  a);
    c = sum( a, b);
    printf ("value of c in main() = %d\n",  c);
}

/* 添加两个整数的函数 */
int sum(int a, int b){
    printf ("value of a in sum() = %d\n",  a);
    printf ("value of b in sum() = %d\n",  b);
    return a + b;
}