//
// Created by fly on 2021/8/27.
//

/**
 * 主要理解enum，如何使用enum
 *
 * enum <类型名>{<枚举常量表>}
 * 枚举成员是以标识符形式表示的  整型量，表示枚举型的取值
 *
 * https://light-city.club/sc/basic_content/enum/
 * 问题：作用域不受限，会容易引起命名冲突（多个枚举，成员名要不同）
 * 会隐式转换为int
 * 用来表征枚举变量的实际类型不能明确指定，从而无法支持枚举类型的前向声明。（？）
 * 解决方法：把不同的枚举写如到不同的命名空间中
 * namespace Color{
 *      enum type
 *      {
 *          RED,
 *          YELLOW
 *       }
 * }
 * 或者有一个类或者结构体来限制其作用域
 *   struct Color1
    {
        enum Type
        {
            RED=102,
            YELLOW,
            BLUE
        };
    };

 *庆幸的是，C++11 标准中引入了“枚举类”(enum class)，可以较好地解决上述问题。
 * 现在的问题就是：新的enum的作用域不在是全局的； 不能隐式转换成其他类型（需要转换）
 *
 *
 * 类中的枚举
 *
 * 枚举常量不会占用对象的存储空间，它们在编译时被全部求值。
 * 枚举常量的缺点是：它的隐含数据类型是整数，其最大值有限，且不能表示浮点。
 * **/


#include <iostream>
enum weekday{
    s,m,t,w,thu,f,s1
};
//using namespace std;

enum class Color1{
    RED = 2, YELLOW, BLUE
};
enum class Color2{
    RED = 2, YELLOW, BLUE
};
class Person{
public:
    typedef enum {
        BOY = 0,
        GIRL
    }SexType;
};
int main()
{
    enum weekday wek = s;
    Person lv;
    Color1 c2 = Color1::RED;
    std::cout<<Person::BOY<<std::endl;
    std::cout<<lv.BOY<<std::endl;
    std::cout<<(int)c2<<std::endl;

    for (int i = wek; i != f; ++i) {
        std::cout<<i<<std::endl;
        std::cout<<wek + s << std::endl;
        std::cout<<"------------"<<std::endl;
    }
}

