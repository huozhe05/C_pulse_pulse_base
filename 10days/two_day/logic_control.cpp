//
// Created by fly on 2021/8/27.
//
/**
 * for while
 * if else
 * switch
 * break continue
 * **/


#include <iostream>

int main()
{
    for (int i = 0; i < 5; ++i) {
        if (i == 0)
            continue;
        if (i % 2)
        {
            std::cout<<i <<": "<< i * 2 <<std::endl;
        }
        else
            std::cout<<i<<std::endl;

    }

    for (int i = 0; i < 10; ++i) {
        switch (i) {
            case 1: std::cout<< i <<": " << i * i<<std::endl;
                break;
            case 3: std::cout<< i <<": " << i * 2<<std::endl;
                break;
            default:std::cout<<i<<std::endl;
        }
    }
    return 0;
}
