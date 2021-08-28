//
// Created by fly on 2021/8/27.
//

/**
 * 结构体的声明，初始化
 * 结构体数组
 * 结构体与class的区别和相似的地方
 *
 *
 * C 中结构体只是单纯的用作数据的复合类型，不能把函数放到结构体中
 * 不能使用C++中访问修饰符， 类型都是public的
 * 不能继承
 * 结构体与函数同名也能正常的运行
 *
 * C++可以在结构体中定义函数
 * 可以继承
 *
 *
 * struct 更合适看成是一个数据结构的实体，class更合适看成一个对象的实体
 * 区别：struct默认的访问权限为public，class为private
 * **/
#include <iostream>

struct Base{
    int i;
    virtual void print(){
        printf("%s\n","Base");
    };
};
typedef struct Base2{
    int i;
};
// 继承案例
struct Derived:Base{
public:
    int v2;
    void print()
    {
        std::cout<<"继承案例"<<std::endl;
    }
};


int main()
{
    Base *b = new Derived();
    b -> print();
    return 0;
}