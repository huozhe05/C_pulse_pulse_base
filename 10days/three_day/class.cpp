//
// Created by fly on 2021/8/28.
//
/**
 * 类的基本操作
 * **/

#include <iostream>
#include <string>
class Student{
private:
    float math;
    float english;
    float Chinese;
    int age;
    std::string name;

public:
    Student(std::string name1, int age1, float math1, float english1, float Chinese1){
        name = name1;
        age = age1;
        math = math1;
        english = english1;
        Chinese = Chinese1;
    }

    void Print_score()
    {
        float all_score = math + english + Chinese;

        std::cout<<name<<" 总成绩: "<<all_score<<std::endl;
    }
    void Print_mean_score()
    {
        float all_score = math + english + Chinese;
        std::cout<<name<<" 平均成绩: "<<all_score / 3<<std::endl;
    }
    ~Student()
    {

    }

};


int main()
{
    Student obj("lv", 24, 99,88,88);
    obj.Print_mean_score();
    obj.Print_score();
    return 0;
}
