#include<iostream>
using namespace std;

class Apple
{
public:
    static int i;

    Apple()
    {
//        i = 3;
        // Do nothing 
    };
};

int Apple::i = 1;
int main()
{
    Apple obj1;
    Apple obj2;
    // ²»ÐÐ
//    obj1.i =2;
//    obj2.i = 3;

// prints value of i 
    cout << obj1.i<<" "<<obj2.i;
} 