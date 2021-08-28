//
// Created by fly on 2021/8/27.
//

//// 静态变量 看CPlusPlusThings上有详细的描写
/**
 * 静态变量：函数中的变量， 类中的变量
 * 静态类的成员：类对象和类中的函数
 *
 *
 * 函数中的静态变量
 * 当变量声明为static时， 空间将在程序的生命周期内分配。
 * 即使多次调用该函数，静态变量的空间也只分配一次，前一次调用中的变量通过下一次函数调用传递
 * **/

#include <iostream>

// 函数中的静态变量
void demo()
{
    static int count = 1;
//    int count = 1;
    std::cout<<count<<std::endl;
    count++;
}

// 类中的静态变量
class Apple
{
public:
    static int i;
    Apple()
    {

    };
};
// 类中的静态变量应由用户使用类外的类名和范围解析运算符显式初始化
// 没有这句无法编译成功
int Apple::i = 1;

// 类对象为静态
class Apple2
{
    int i;
public:
    Apple2()
    {
        i = 0;
        std::cout << "Inside Constructor\n";
    }
    ~Apple2()
    {
        std::cout << "Inside Destructor\n";
    }
};
// 类中的静态函数
class Apple3
{
public:
    static void printmsg()
    {
        std::cout<<"Welcome to Apple!\n";
    }
};

int main()
{
// 1
//    for (int i = 0; i < 3; ++i) {
//        demo();
//    }

// 2
//    Apple obj1;
//    Apple obj2;
//    obj1.i = 2;
//    obj2.i = 3;
//    std::cout<<obj2.i<<std::endl;

// 3
//    int x = 0;
//    if(x == 0)
//    {
//        Apple2 obj;
//    }
//    std::cout << "End of main\n";
//
//    if(x == 0)
//    {
//        // 在main结束后调用析构函数。这是因为静态对象的范围是贯穿程序的生命周期。
//        static Apple2 obj;
//    }
//    std::cout << "End of main\n";

// 4
    Apple3::printmsg();
    return 0;
}