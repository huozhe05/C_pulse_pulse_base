//
// Created by fly on 2021/8/28.
//
/**
 * ���ָ�룬ָ�������飬ָ��������
 * &Ϊȡ��ַ����
 * ������һ���ռ����洢ָ��p������p = array; ��ָ��p��ֵΪarray�ĵ�ַ����Ҫʹ��*p��ȡarray��ֵ
 * (p+1) ���ƶ��Ĵ�СΪsizeof��type���Ĵ�С
 * ������Ҳ��һ��ָ��
 * ָ���ָ���õıȽ���
 *
 * ָ��
 * ����ʵ����û�д洢�ռ�
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
