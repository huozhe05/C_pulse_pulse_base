//
// Created by fly on 2021/8/27.
//

//// ��̬���� ��CPlusPlusThings������ϸ����д
/**
 * ��̬�����������еı����� ���еı���
 * ��̬��ĳ�Ա�����������еĺ���
 *
 *
 * �����еľ�̬����
 * ����������Ϊstaticʱ�� �ռ佫�ڳ�������������ڷ��䡣
 * ��ʹ��ε��øú�������̬�����Ŀռ�Ҳֻ����һ�Σ�ǰһ�ε����еı���ͨ����һ�κ������ô���
 * **/

#include <iostream>

// �����еľ�̬����
void demo()
{
    static int count = 1;
//    int count = 1;
    std::cout<<count<<std::endl;
    count++;
}

// ���еľ�̬����
class Apple
{
public:
    static int i;
    Apple()
    {

    };
};
// ���еľ�̬����Ӧ���û�ʹ������������ͷ�Χ�����������ʽ��ʼ��
// û������޷�����ɹ�
int Apple::i = 1;

// �����Ϊ��̬
class Apple2
{
    int i;
public:
    Apple2()
    {
        i = 0;
        std::cout << "Inside Constructor\n";
    }
    ~Apple2()
    {
        std::cout << "Inside Destructor\n";
    }
};
// ���еľ�̬����
class Apple3
{
public:
    static void printmsg()
    {
        std::cout<<"Welcome to Apple!\n";
    }
};

int main()
{
// 1
//    for (int i = 0; i < 3; ++i) {
//        demo();
//    }

// 2
//    Apple obj1;
//    Apple obj2;
//    obj1.i = 2;
//    obj2.i = 3;
//    std::cout<<obj2.i<<std::endl;

// 3
//    int x = 0;
//    if(x == 0)
//    {
//        Apple2 obj;
//    }
//    std::cout << "End of main\n";
//
//    if(x == 0)
//    {
//        // ��main�������������������������Ϊ��̬����ķ�Χ�ǹᴩ������������ڡ�
//        static Apple2 obj;
//    }
//    std::cout << "End of main\n";

// 4
    Apple3::printmsg();
    return 0;
}