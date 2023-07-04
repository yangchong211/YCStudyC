#include <stdio.h>


void quickSort(int pInt[7], int i, int i1);

void print(int pInt[7], int size);

int main() {
    printf("Hello, World!\n");
    int array[] = {3, 44, 38, 5, 47, 15, 36};
    int size = sizeof(array) / sizeof(int);
    printf("原始序列为：\n");
    print(array,size);
    quickSort(array,0,size-1);
    printf("排序后序列为：\n");
    print(array,size);
    return 0;
}


void print(int array[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

/*获取基准坐标，并相对有序(左边比基准坐标小，右边比基准坐标大)*/
int getStandard(int array[],int low,int high) {
    int key = array[low];  //临时保存基准元素
    while(low<high) {
        //high指针从后向前遍历 ， 元素比基准元素大则指针向前移动 则比基准元素小则和基准元素交换
        while(low<high && array[high]>=key){
            high--;
        }
        if(low<high){
            array[low] = array[high];  //赋值给第一个元素，因为第一个元素作为基准元素已经临时保存了，所可以直接赋值
        }
        //low指针从前向后遍历 ， 元素比基准元素小则指针向后移动 否则比基准元素大则和基准元素交换
        while(low<high && array[low]<=key){
            low++;
        }
        if(low<high){
            array[high] = array[low];  //复制给high指针所指得位置，因为在11行已经赋值给array[low]了
        }
    }
    array[low] = key;
    return low;
}

void quickSort(int array[],int low,int high){
    if(low<high){  //递归出口
        int standard = getStandard(array,low,high);
        quickSort(array,low,standard-1);  //比基准元素小的部分继续调用快速排序
        quickSort(array,standard+1,high);   //比基准元素大的部分继续调用快速排序
    }
}
