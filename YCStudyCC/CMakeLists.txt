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
# day29 预处理器
# day30 信号处理

add_executable(YCStudyCC
        main.cpp
        # 下面是c++
        study1/day1_hello.cpp
        study1/day2_zhushi.cpp
        study1/day3_data_type.cpp
        study1/day4_var.cpp
        study1/day5_zyy.cpp
        study1/day6_val.cpp
        study1/day7_xsf.cpp
        study1/day8_ysf.cpp
        study1/day9_yuju.cpp
        study1/day10_fun.cpp
        study1/day11_num.cpp
        study1/day12_array.cpp
        study1/day13_string.cpp
        study1/day14_zhizhen.cpp
        study1/day15_reference.cpp
        study1/day16_time.cpp
        study1/day17_input.cpp
        study1/day18_struct.cpp
        study1/day19_class.cpp
        study1/day20_extend.cpp
        study1/day21_overive.cpp
        study1/day22_duotai.cpp
        study1/day23_abs.cpp
        study1/day24_file_io.cpp
        study1/day25_exception.cpp
        study1/day26_memory.cpp
        study1/day27_space.cpp
        study1/day28_template.cpp
        study1/day29_define.cpp
        study1/day30_signal.cpp
        study1/day31_thread.cpp
        study1/day32_web.cpp
        study2/text.cpp
        study4/5.cpp
        study4/51.cpp
        study4/graduateManager.h
        study4/StudentManager.cpp
        study4/StudentManager.h test/StudentManager.cpp)
