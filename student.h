#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstdlib>

using namespace std;


class Student
{
public:
    Student();
    Student(string n, int a);
    ~Student();
    void setAge(int a);
    void setName(string n);
    string getName();
    int getAge();
    void printStudentInfo();

private:
    string name;
    int age;

};

#endif // STUDENT_H
