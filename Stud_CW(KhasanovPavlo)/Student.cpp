#include "Student.h"

Student::Student()
{
    cout << "Constructor by default\n";

    name = nullptr;

    age = 0;
}

Student::Student(const char* Name, int Age)
{
    cout << "Constructor with parameters\n";

    name = new char[strlen(Name) + 1];

    strcpy_s(name, strlen(Name) + 1, Name);

    age = Age;
}

Student& Student::operator=(Student& stud)
{
    if (this->name != nullptr)
        delete[] this->name;
    this->name = new char[strlen(stud.name) + 1];
    strcpy_s(this->name, strlen(this->name) + 1, stud.name);
    this->age = stud.age;
    return *this;
}

void Student::setName(const char* name)
{
    this->name = new char[strlen(name) + 1];
    strcpy_s(this->name, strlen(name) + 1, name);
}

void Student::setAge(int age)
{
    this->age = age;
}

void Student::Output()
{
    if (name == nullptr)

    {

        cout << "Empty object!\n";

        return;

    }

    cout << "Name: " << name << endl

        << "Age: " << age << endl << endl;
}

Student::~Student()
{
    cout << "Destruct\n";

    delete[] name;
}
