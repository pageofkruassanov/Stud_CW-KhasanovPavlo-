#pragma once
#include<iostream>

using namespace std;

class Student
{
private:
    char* name;

    int age;
public:

    Student(); // construct by default

    Student(const char* Name, int Age); // construct by 2 param
    Student& operator=(Student& stud);

    void setName(const char* name);
    void setAge(int age);

    void Output();

    ~Student();
};

