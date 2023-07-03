cmake_minimum_required(VERSION 3.24)
project(YCStudyCC)

set(CMAKE_CXX_STANDARD 17)

# c++
# day1 基础教程
# day2 注释
# day3 数据类型
# day4 变量
# day5 作用域
# day6 常量
# day7 修饰副
# day8 运算符
# day9 语句
# day10 函数
# day11 数字
# day12 数组
# day13 字符串
# day14 指针
# day15 引用
# day16 时间
# day17 输入输出
# day18 数据结构
# day19 类和对象
# day20 继承
# day21 重载
# day22 多态
# day23 数据抽象

# day24 文件和流
# day25 异常处理
# day26 动态内存
# day27 命名空间
# day28 模版

add_executable(YCStudyCC
        main.cpp
        # 下面是c++
        study/day1_hello.cpp
        study/day2_zhushi.cpp
        study/day3_data_type.cpp
        study/day4_var.cpp
        study/day5_zyy.cpp
        study/day6_val.cpp
        study/day7_xsf.cpp
        study/day8_ysf.cpp
        study/day9_yuju.cpp
        study/day10_fun.cpp
        study/day11_num.cpp
        study/day12_array.cpp
        study/day13_string.cpp
        study/day14_zhizhen.cpp
        study/day15_reference.cpp
        study/day16_time.cpp
        study/day17_input.cpp
        study/day18_struct.cpp
        study/day19_class.cpp
        study/day20_extend.cpp
        study/day21_overive.cpp
        study/day22_duotai.cpp
        study/day23_abs.cpp
        study/day24_file_io.cpp
        study/day25_exception.cpp
        study/day26_memory.cpp
        study/day27_space.cpp study/day28_template.cpp)
