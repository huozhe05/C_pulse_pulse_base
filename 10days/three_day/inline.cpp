//
// Created by fly on 2021/8/28.
//
/**
 * ��Ҫ���������������ע����궨�������
 * ���������ͺ�ʮ�ֵ����ƣ����ǰѴ��������ô������滻
 * ������Ԥ�������Ժ�����滻
 * ����������ͨ��������������ʵ�ֵ�
 *
 *
 *
 * ��������Ҳ��һ���ľ����ԡ����Ǻ����е�ִ�д��벻��̫���ˣ���������������ĺ��������һ��ı����������������ʽ����������ͨ�ķ�ʽ���ú��������������������ͺ���ͨ����ִ��Ч��һ���ˡ�
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