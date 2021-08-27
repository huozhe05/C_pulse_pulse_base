//
// Created by fly on 2021/8/26.
//
#include <iostream>

/**
 * cout��printf
 * cin��scanf
 * ʹ��std::ios::sync_with_stdio(false);�������ܽ��cout��cin���ܱȽ���������
 * printf��scanf��������ѵľ���Ҫ�Լ��ֶ���д���ݵ�����
 *
 * �ı�����������
 * flie��read��write
 *
 *
 * ��ʽ�����
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

    //���õ����
    std::cout << "cout" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    // ����ָ��λС�� (��Ҫ��ͷ����#include <iomanip>)
    std::cout << "b: " << std::setprecision(3) << b << std::endl;
    // +10
    std::cout << "a: " << std::showpos << a << std::endl;
    std::cout << std::uppercase << 12345671234567 << std::endl;


    printf("printf\n");
    printf("a: %d\n", a);
    printf("b: %f\n", b);
    // ����ָ��λС��
    printf("b: %0.3f\n", b);
    ////�����ٲ�����Ӧ�ĸ�ʽ�����
    ////TODO


    //�ļ�
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


    ////��ʽ�����룬���
    ////TODO

    return 0;
}
