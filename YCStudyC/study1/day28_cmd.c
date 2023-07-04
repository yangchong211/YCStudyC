//
// Created by 杨充 on 2023/6/6.
//


#include <printf.h>


int main(int argc, char *argv[]) {
    if (argc == 2) {
        printf("The argument supplied is %s\n", argv[1]);
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
    } else {
        printf("One argument expected.\n");
    }
}