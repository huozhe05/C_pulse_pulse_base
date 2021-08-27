//
// Created by fly on 2021/8/26.
//
#include <iostream>
#include <math.h>
/**
 * 加 减 乘 除
 * 注意类型上的转换 int 到 float。也就是精度上的变换
 *
 * （--） （++）
 * ~ ^ | & 二进制运算符
 * ！用法
 * **/

void BinaryRecursion(int n)
{
    int a;
    a = n % 2;
    n = n >> 1; // 右移动一位， 相当与除以2。 左移乘以2
    if (n != 0)
    {
        BinaryRecursion(n);
    }
    std::cout<<a;
}



int main()
{
    int a = 2, b = 3;
    float c = 1.942;
    std::cout<< a / b << std::endl;
    std::cout<< float(a) / float(b) << std::endl;
    std::cout<< int(c) << std::endl;


    // 符号 ！用与bool，0为false，其他为true
    std::cout<<"!\n";
    std::cout<<!(6)<<std::endl;
    std::cout<<!(0)<<std::endl;
    std::cout<<!(-24)<<std::endl;

    // abs求绝对值
    std::cout<<abs(-24)<<std::endl;

    // 位运算
    a = 6; // 0110
    b = 5; // 0101
    c = 10; // 1010
    BinaryRecursion(a);
    std::cout<<std::endl;
    BinaryRecursion(b);
    std::cout<<std::endl;
    BinaryRecursion(c);
    std::cout<<std::endl;

    // ~ 不清楚，主要是对补码有些忘了
    std::cout<<"a："<<(a)<<std::endl;
    std::cout<<"对a取反："<<(~a)<<std::endl;
    std::cout<<"b："<<(b)<<std::endl;
    std::cout<<"对b取反："<<(~b)<<std::endl;

    // | 或运算
    BinaryRecursion(a|b);
    std::cout<<std::endl;
    std::cout<<"对a，b或："<<(b|a)<<std::endl;

    // & 与运算
    BinaryRecursion(a&b);
    std::cout<<std::endl;
    std::cout<<"对a，b或："<<(b&a)<<std::endl;

    // ^ 异或运算
    BinaryRecursion(a^b);
    std::cout<<std::endl;
    std::cout<<"对a，b或："<<(b^a)<<std::endl;


    ///// 对二进制的补码， 反码. 基础的应用
    //// TODO
    return 0;
}
