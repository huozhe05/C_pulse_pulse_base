//
// Created by fly on 2021/8/26.
//
/**
 * union ������
 *
 * */

#include <iostream>

union myun
{
    struct {int x; int y; int z;} u;
    int k;
    int b;
}a;

int main()
{
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;

    a.k = 0; //ֻ�Ḳ�ǵ���һ��int�ռ�ֵ
    a.b = 2; //ֻ�Ḳ�ǵ���һ��int�ռ�ֵ
    printf("%d %d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k,a.b);
    system("pause");
    return 0;
}
