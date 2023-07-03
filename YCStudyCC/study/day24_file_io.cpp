//
// Created by 杨充 on 2023/6/19.
//


//C++ 文件和流
//到目前为止，我们已经使用了 iostream 标准库，它提供了 cin 和 cout 方法分别用于从标准输入读取流和向标准输出写入流。

#include <fstream>
#include <iostream>

using namespace std;

void test1();

int main() {
    test1();
    return 0;
}

void test1() {
    char data[100];
    ofstream outfile;
    //打开文件
    //在从文件读取信息或者向文件写入信息之前，必须先打开文件。
    //ofstream 和 fstream 对象都可以用来打开文件进行写操作，如果只需要打开文件进行读操作，则使用 ifstream 对象。
    outfile.open("yc.txt");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);


    // 向文件写入用户输入的数据
    // 使用流插入运算符（ << ）向文件写入信息，就像使用该运算符输出信息到屏幕上一样。
    // 唯一不同的是，在这里您使用的是 ofstream 或 fstream 对象，而不是 cout 对象。
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // 再次向文件写入用户输入的数据
    outfile << data << endl;

    // 关闭打开的文件
    //关闭文件
    //当 C++ 程序终止时，它会自动关闭刷新所有流，释放所有分配的内存，并关闭所有打开的文件。但程序员应该养成一个好习惯，在程序终止前关闭所有打开的文件。
    //下面是 close() 函数的标准语法，close() 函数是 fstream、ifstream 和 ofstream 对象的一个成员。
    outfile.close();


    // 以读模式打开文件
    ifstream infile;
    infile.open("yc.txt");
    cout << "Reading from the file" << endl;
    // 使用流提取运算符（ >> ）从文件读取信息，就像使用该运算符从键盘输入信息一样。
    // 唯一不同的是，在这里您使用的是 ifstream 或 fstream 对象，而不是 cin 对象。
    infile >> data;
    cout << data << endl;

    infile >> data;
}