//
// Created by 杨充 on 2023/6/6.
//

//有时，您可能会碰到这样的情况，您希望函数带有可变数量的参数，而不是预定义数量的参数。
#include "stdarg.h"

//省略号 ... 表示可变参数列表。
int func_name(int arg1,  ...);

int main(){
    func_name(2,3,4);
    func_name(2,3,4,5);
    return 0;
}






