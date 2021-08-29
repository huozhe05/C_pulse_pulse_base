//
// Created by fly on 2021/8/28.
//
/**
 * 理解指针，指针与数组，指针与引用
 * &为取地址符号
 * 先声明一个空间来存储指针p变量，p = array; 则指针p的值为array的地址，需要使用*p来取array的值
 * (p+1) 则移动的大小为sizeof（type）的大小
 * 数组名也是一个指针
 * 指针的指针用的比较少
 *
 * 指针
 * 引用实际上没有存储空间
 * https://blog.csdn.net/zdaiot/article/details/83066234
 * **/



#include <iostream>

void Print(int (&q)[10])
{
    for(int i = 0; i < 5; i++)
    {
        std::cout<<q[i]<<std::endl;
    }
}


int main()
{
    int *p = NULL;
    int array[10] = {8,1,2,3,4,5,6,7,8,9};
    p = array;
    int (&q)[10] = array;
    std::cout<<"&array[0]: "<<&array[0]<<"  p: "<<p<<std::endl;
    std::cout<<"&p: "<<&p<<std::endl;
    std::cout<<std::endl;
    std::cout<<"&array[0]: "<<&array[0]<< "  q: " << q <<std::endl;
    std::cout<<"&q: "<<&q<<std::endl;
    std::cout<<q<<std::endl;
    Print(array);
//    system("pause");
}
