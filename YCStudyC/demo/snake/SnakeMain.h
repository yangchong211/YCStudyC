//
// Created by 杨充 on 2023/12/15.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*声明游戏角色的结构体*/
struct Man {
    int x; // 角色横坐标
    int y; // 角色纵坐标
    int v; // 角色移动速度
};

/*初始化游戏角色*/
struct Man man = {1, 1, 1};


struct Man1 {
    int x;
    int y;
    int z;
};

struct Man1 man1;
