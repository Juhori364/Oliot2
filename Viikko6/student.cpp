#include "student.h"

Student::Student() {

}

Student::Student(string n, int a){
    name=n;
    age=a;

}


Student::~Student()
{

}

void Student::setAge(int a)
{
    age=a;
}

void Student::setName(string n)
{
    name=n;
}

string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}

void Student::printStudentInfo()
{
    cout << "Student name: " << name << endl << "Student age: " << age << endl;
}
