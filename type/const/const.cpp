//
// Created by fly on 2021/8/26.
//
// file1.cpp
//int ext;
// file2.cpp
#include<iostream>
/**
 * by 光城
 * compile: g++ -o file file2.cpp file1.cpp
 * execute: ./file
 */
extern int ext = 9;
int main(){
    const int a[10] = {0};
    const int *p;
    p = a;
    std::cout<<p[5]<<std::endl;
}




//extern_file1.cpp
//extern const int ext=12;
////extern_file2.cpp
//#include<iostream>
///**
// * by 光城
// * compile: g++ -o file const_file2.cpp const_file1.cpp
// * execute: ./file
// */
//extern const int ext;
//int main(){
//    std::cout<<ext<<std::endl;
//}