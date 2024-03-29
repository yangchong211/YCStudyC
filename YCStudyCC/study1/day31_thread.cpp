//
// Created by 杨充 on 2023/7/5.
//


//C++ 多线程
//多线程是多任务处理的一种特殊形式，多任务处理允许让电脑同时运行两个或两个以上的程序。一般情况下，两种类型的多任务处理：基于进程和基于线程。
//基于进程的多任务处理是程序的并发执行。
//基于线程的多任务处理是同一程序的片段的并发执行。

#include <iostream>
// 必须的头文件
#include <pthread.h>

using namespace std;
#define NUM_THREADS 5

void test0();
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();

int main() {
    test0();
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();
//    test6();
//    test7();
//    test8();
    return 0;
}

// 线程的运行函数
void *say_hello(void *args) {
    if (args != NULL){
        string str = *((string *) args);
        cout << "Hello Doubi！" << str << endl;
    } else {
        cout << "Hello Doubi！" << endl;
    }
    return 0;
}

void test0(){
    pthread_t thread;
    //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
    int ret = pthread_create(&thread,NULL, say_hello , (void *)&"yc dou bi");
    //注意，最后一个传入参数，必须使用 & ，否则参数无法传递
    //int ret = pthread_create(&thread,NULL, say_hello , (void *)"yc dou bi");
    //创建线程成功时，函数返回 0，若返回值不为 0 则说明创建线程失败。
    if (ret != 0) {
        cout << "pthread_create error: error_code=" << ret << endl;
    } else {
        cout << "pthread_create success: " << ret << endl;
    }
}

//创建线程
//#include <pthread.h>
//pthread_create (thread, attr, start_routine, arg)
//thread	指向线程标识符指针。
//attr	一个不透明的属性对象，可以被用来设置线程属性。您可以指定线程属性对象，也可以使用默认值 NULL。
//start_routine	线程运行函数起始地址，一旦线程被创建就会执行。
//arg	运行函数的参数。它必须通过把引用作为指针强制转换为 void 类型进行传递。如果没有传递参数，则使用 NULL。
void test1() {
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; ++i) {
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        //创建线程成功时，函数返回 0，若返回值不为 0 则说明创建线程失败。
        if (ret != 0) {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
}

//终止线程
//在这里，pthread_exit 用于显式地退出一个线程。通常情况下，pthread_exit() 函数是在线程完成工作后无需继续存在时被调用。
//如果 main() 是在它所创建的线程之前结束，并通过 pthread_exit() 退出，那么其他线程将继续执行。否则，它们将在 main() 结束时自动被终止。
void test2() {
    //等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);
}

void *PrintHello(void *threadid) {
    // 对传入的参数进行强制类型转换，由无类型指针变为整形数指针，然后再读取
    int tid = *((int *) threadid);
    cout << "Hello Runoob! 线程 ID, " << tid << endl;
    pthread_exit(NULL);
}

void test3() {
    pthread_t threads[NUM_THREADS];
    int indexes[NUM_THREADS];
    int rc;
    for (int i = 0; i < NUM_THREADS; i++) {
        cout << "main() : 创建线程, " << i << endl;
        indexes[i] = i;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void *) &(indexes[i]));
        if (rc != 0) {
            cout << "Error:无法创建线程," << rc << endl;
            exit(-1);
        }
    }
}

void test4() {
    pthread_exit(NULL);
}

//向线程传递参数
//这个实例演示了如何通过结构传递多个参数。您可以在线程回调中传递任意的数据类型，因为它指向 void，如下面的实例所示：
struct thread_data{
    int thread_id;
    char *message;
};

void *PrintYc(void *thread_arg){
    struct thread_data *my_data;
    //my_data = static_cast<thread_data *>(thread_arg);
    my_data = (struct thread_data *) thread_arg;
    cout << "Thread ID : " << my_data->thread_id ;
    cout << " Message : " << my_data->message << endl;
    pthread_exit(NULL);
}

void test5() {
    pthread_t threads[NUM_THREADS];
    struct thread_data td[NUM_THREADS];
    int rc;
    int i;
    for( i=0; i < NUM_THREADS; i++ ){
        cout <<"main() : creating thread, " << i << endl;
        td[i].thread_id = i;
        td[i].message = (char*)"This is message";
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        rc = pthread_create(&threads[i], NULL,PrintYc, (void *)&td[i]);
        if (rc){
            cout << "Error:unable to create thread," << rc << endl;
            exit(-1);
        }
    }
}

void test6() {
    pthread_exit(NULL);
}


//连接和分离线程
//我们可以使用以下两个函数来连接或分离线程：
//pthread_join (threadid, status)
//pthread_detach (threadid)
void test7(){
    //pthread_join() 子程序阻碍调用程序，直到指定的 threadid 线程终止为止。
    //当创建一个线程时，它的某个属性会定义它是否是可连接的（joinable）或可分离的（detached）。
    //只有创建时定义为可连接的线程才可以被连接。如果线程创建时被定义为可分离的，则它永远也不能被连接。
}

void test8() {

}




