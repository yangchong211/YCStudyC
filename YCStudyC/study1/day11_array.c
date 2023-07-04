//
// Created by 杨充 on 2023/5/31.
//



#include <printf.h>

void array1();
double array2(int arr[] , int size);
void array3();

int main() {
    array1();
    int balance[5] = {100,200,300,400,500};
    double svg;
    svg = array2(balance,5);
    /* 输出返回值 */
    printf( "平均值是： %f \n", svg);

    array3();
    return 0;
}

//下面的实例使用了上述的三个概念，即，声明数组、数组赋值、访问数组
void array1() {
    int n[10];
    for (int i = 0; i < 10; i++) {
        n[i] = i + 100;
        printf("Element[%d] = %d\n", i, n[i]);
    }
}

double array2(int arr[], int size) {
    int i;
    double avg;
    double sum = 0;
    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}

//指向数组的指针
//https://www.runoob.com/cprogramming/c-pointer-to-an-array.html
void array3(){
    /* 带有 5 个元素的整型数组 */
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    int i;
    p = balance;
    /* 输出数组中每个元素的值 */
    printf( "使用指针的数组值\n");
    for ( i = 0; i < 5; i++ ){
        printf("*(p + %d) : %f\n",  i, *(p + i) );
    }

    printf( "使用 balance 作为地址的数组值\n");
    for ( i = 0; i < 5; i++ ){
        printf("*(balance + %d) : %f\n",  i, *(balance + i) );
    }
}