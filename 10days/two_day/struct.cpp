//
// Created by fly on 2021/8/27.
//

/**
 * �ṹ�����������ʼ��
 * �ṹ������
 * �ṹ����class����������Ƶĵط�
 *
 *
 * C �нṹ��ֻ�ǵ������������ݵĸ������ͣ����ܰѺ����ŵ��ṹ����
 * ����ʹ��C++�з������η��� ���Ͷ���public��
 * ���ܼ̳�
 * �ṹ���뺯��ͬ��Ҳ������������
 *
 * C++�����ڽṹ���ж��庯��
 * ���Լ̳�
 *
 *
 * struct �����ʿ�����һ�����ݽṹ��ʵ�壬class�����ʿ���һ�������ʵ��
 * ����structĬ�ϵķ���Ȩ��Ϊpublic��classΪprivate
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
// �̳а���
struct Derived:Base{
public:
    int v2;
    void print()
    {
        std::cout<<"�̳а���"<<std::endl;
    }
};


int main()
{
    Base *b = new Derived();
    b -> print();
    return 0;
}