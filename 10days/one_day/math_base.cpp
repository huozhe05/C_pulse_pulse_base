//
// Created by fly on 2021/8/26.
//
#include <iostream>
#include <math.h>
/**
 * �� �� �� ��
 * ע�������ϵ�ת�� int �� float��Ҳ���Ǿ����ϵı任
 *
 * ��--�� ��++��
 * ~ ^ | & �����������
 * ���÷�
 * **/

void BinaryRecursion(int n)
{
    int a;
    a = n % 2;
    n = n >> 1; // ���ƶ�һλ�� �൱�����2�� ���Ƴ���2
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


    // ���� ������bool��0Ϊfalse������Ϊtrue
    std::cout<<"!\n";
    std::cout<<!(6)<<std::endl;
    std::cout<<!(0)<<std::endl;
    std::cout<<!(-24)<<std::endl;

    // abs�����ֵ
    std::cout<<abs(-24)<<std::endl;

    // λ����
    a = 6; // 0110
    b = 5; // 0101
    c = 10; // 1010
    BinaryRecursion(a);
    std::cout<<std::endl;
    BinaryRecursion(b);
    std::cout<<std::endl;
    BinaryRecursion(c);
    std::cout<<std::endl;

    // ~ ���������Ҫ�ǶԲ�����Щ����
    std::cout<<"a��"<<(a)<<std::endl;
    std::cout<<"��aȡ����"<<(~a)<<std::endl;
    std::cout<<"b��"<<(b)<<std::endl;
    std::cout<<"��bȡ����"<<(~b)<<std::endl;

    // | ������
    BinaryRecursion(a|b);
    std::cout<<std::endl;
    std::cout<<"��a��b��"<<(b|a)<<std::endl;

    // & ������
    BinaryRecursion(a&b);
    std::cout<<std::endl;
    std::cout<<"��a��b��"<<(b&a)<<std::endl;

    // ^ �������
    BinaryRecursion(a^b);
    std::cout<<std::endl;
    std::cout<<"��a��b��"<<(b^a)<<std::endl;


    ///// �Զ����ƵĲ��룬 ����. ������Ӧ��
    //// TODO
    return 0;
}
