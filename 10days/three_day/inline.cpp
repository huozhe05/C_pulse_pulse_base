//
// Created by fly on 2021/8/28.
//
/**
 * 主要是理解内联函数，注意与宏定义的区别
 * 内联函数和宏十分的相似，都是把代码段与调用处进行替换
 * 宏是由预处理器对宏进行替换
 * 内联函数是通过编译器控制来实现的
 *
 *
 *
 * 内联函数也有一定的局限性。就是函数中的执行代码不能太多了，如果，内联函数的函数体过大，一般的编译器会放弃内联方式，而采用普通的方式调用函数。这样，内联函数就和普通函数执行效率一样了。
 * https://blog.csdn.net/linkedin_35878439/article/details/79217390?spm=1001.2014.3001.5501
 * **/

#include <iostream>

inline double CalArea(double radius);
int main()
{
    double r(3.0);
    double area;
    area = CalArea(r);
    std::cout<<area<<std::endl;
    
    return 0;
}

inline double CalArea(double radius)
{
    return 3.14 * radius * radius;
}