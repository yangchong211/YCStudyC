cmake_minimum_required(VERSION 3.24)
project(YCStudyC C)

set(CMAKE_C_STANDARD 11)

# study1
# day1 基础案例
# day2 数据类型
# day3 变量
# day4 常量
# day5 存储类
# day6 运算符
# day7 语句，判断
# day8 循环
# day9 函数案例
# day10 作用域案例
# day11 数组
# day12 枚举
# day13 指针
# day14 函数指针&回调函数
# day15 自负床
# day16 结构体
# day17 共用体
# day18 位域
# day19 typedef
# day20 输入和输出
# day21 file文件
# day22 预处理器
# day23 头文件
# day24 类型转化
# day25 错误处理
# day26 可变参数和递归
# day27 内存管理
# day28 命令行参数


# study2 案例练习
# day1 输出整数，输出单个字符
# day2 输出浮点数，双精度数
# day3 两数据相加，两个浮点数相乘，两个数相除
# day4 字符转ASCII码
# day5 计算 int, float, double 和 char 字节大小
# day6 判断是否是基数或者偶数
# day7 输出九九乘法口诀表，计算自然数的和，判断字母
# day8 循环输出26个字母，判断数字为几位数
# day9 输出当前文件执行代码。考点1：file文件操作
# day10 将字符串写入文件。考点：考察file文件操作
# day11 计算两个时间段的差值



# study3 算法练习


# study4 经典案例

add_executable(
        YCStudyC main.c
        # c语言案例
        day1/day1_3_hello.c
        study1/day2_data.c
        study1/day3_var.c
        study1/day4_val.c
        study1/day5_ccl.c
        study1/day6_ysf.c
        study1/day7_yuju.c
        study1/day8_while.c
        study1/day9_fun.c
        study1/day10_zyy.c
        study1/day11_array.c
        study1/day12_enum.c
        study1/day13_runoob.c
        study1/day14_callback.c
        study1/day15_string.c
        study1/day16_struct.c
        study1/day17_union.c
        study1/day18_weiyu.c
        study1/day19_typedef.c
        study1/day20_print_scanf.c
        study1/day21_file.c
        study1/day22_yclq.c
        study1/day23_header.h
        study1/day23_header.c
        study1/day24_zh.c
        study1/day25_error.c
        study1/day26_params.c
        study1/day27_memory.c
        study1/day28_cmd.c

        study2/day1_print_num.c
        study2/day2_print_float.c
        study2/day3_number_add.c
        study2/day4_char_ascii.c
        study2/day5_byte.c
        study2/day6_if_else.c
        study2/day7_print_99.c
        study2/day8_a_z.c
        study2/day9_file.c
        study2/day10_file_char.c
        study2/day11_date.c

        demo/game/GameMain.c

        demo/manager/StudentManager.c
        demo/manager/StudentManager.h


        demo/sokoban/Sokoban.c
        demo/sokoban/Sokoban.h

        demo/clearance/MineClearance.c
        demo/clearance/MineClearance.h

        demo/calendar/Calendar.c
        demo/calendar/Calendar.h

        demo/guess/GuessNumber.c

        demo/gobang/GoBangGame.h
        demo/gobang/GoBangGame.c
        demo/maze/MazeGame.c
        demo/maze/MazeGame.h
        demo/manager/StuManager.c
        demo/manager/StuManager.h day1/day1_1_c.c demo/manager/Stu.h demo/manager/Stu.c day1/day1_4_basic.c day2/day2_2_const.c day8/day8_1_pointer.c demo/snake/SnakeMain.h demo/snake/SnakeMain.c day2/day2_3_enum.c day2/day2_4_string.c)
