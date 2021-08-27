//
// Created by fly on 2021/8/26.
//
#include <iostream>

/**
 * cout与printf
 * cin与scanf
 * 使用std::ios::sync_with_stdio(false);基本上能解决cout与cin性能比较慢的问题
 * printf与scanf，最烦的最难的就是要自己手动填写数据的类型
 *
 * 文本的输入和输出
 * flie，read，write
 *
 *
 * 格式化输出
 * **/


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main()
{
    int a = 10;
    float b = 10.101010;
    char c = 'f';

    //常用的输出
    std::cout << "cout" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    // 保留指定位小数 (必要的头函数#include <iomanip>)
    std::cout << "b: " << std::setprecision(3) << b << std::endl;
    // +10
    std::cout << "a: " << std::showpos << a << std::endl;
    std::cout << std::uppercase << 12345671234567 << std::endl;


    printf("printf\n");
    printf("a: %d\n", a);
    printf("b: %f\n", b);
    // 保留指定位小数
    printf("b: %0.3f\n", b);
    ////后续再补充相应的格式化输出
    ////TODO


    //文件
    std::ifstream myfile("F:\\course\\C++base\\10days\\one_day\\flie.txt", std::ios::out);
    std::ofstream outfile("F:\\course\\C++base\\10days\\one_day\\out.txt", std::ios::app);
    std::string temp;

    if (!myfile.is_open())
    {
        std::cout << "open fail\n";
    }
    while(std::getline(myfile, temp))
    {
//        std::cout << temp << std::endl;
        outfile << temp;
        outfile << std::endl;
    }
    myfile.close();
    outfile.close();


    ////格式流输入，输出
    ////TODO

    return 0;
}
