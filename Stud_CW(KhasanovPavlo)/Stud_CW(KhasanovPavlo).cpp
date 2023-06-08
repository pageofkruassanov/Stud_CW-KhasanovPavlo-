#include "Student.h"
#include "func.h"
#include <locale.h>


//Task1
//Практика 1: Добавить в класс сэттеры(для каждого поля) и заполнить массив объектов с использованием сэттеров.
//Сэттеры должны принимать значения с клавиатуры.Вывести заполненный массив на экран

//Практика 2 : Добавить глобальную функцию, которая принимает массив объектов и добавляет к нему одного студента
int main()
{
    setlocale(0, "Rus");
    int sizeArr = 2;
    Student* students = new Student[sizeArr];
    char name[40];
    int age;

    cout << "Введите имя 1 студента: ";
    cin.getline(name, 40);
    cout << endl << "Введите возраст 1 студента: ";
    cin >> age;
    students[0].setName(name);
    students[0].setAge(age);

    cout << "Введите имя 2 студента: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(name, 40);
    cout << endl << "Введите возраст 2 студента: ";
    cin >> age;
    students[1].setName(name);
    students[1].setAge(age);

    cout << "Введите имя 3 студента: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(name, 40);
    cout << endl << "Введите возраст 3 студента: ";
    cin >> age;
    addStudent(students, sizeArr, name, age);
    students[0].Output();
    cout << endl;
    students[1].Output();
    cout << endl;
    students[2].Output();
}
