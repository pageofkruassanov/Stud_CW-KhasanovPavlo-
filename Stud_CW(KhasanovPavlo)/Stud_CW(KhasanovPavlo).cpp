#include "Student.h"
#include "func.h"
#include <locale.h>


//Task1
//�������� 1: �������� � ����� �������(��� ������� ����) � ��������� ������ �������� � �������������� ��������.
//������� ������ ��������� �������� � ����������.������� ����������� ������ �� �����

//�������� 2 : �������� ���������� �������, ������� ��������� ������ �������� � ��������� � ���� ������ ��������
int main()
{
    setlocale(0, "Rus");
    int sizeArr = 2;
    Student* students = new Student[sizeArr];
    char name[40];
    int age;

    cout << "������� ��� 1 ��������: ";
    cin.getline(name, 40);
    cout << endl << "������� ������� 1 ��������: ";
    cin >> age;
    students[0].setName(name);
    students[0].setAge(age);

    cout << "������� ��� 2 ��������: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(name, 40);
    cout << endl << "������� ������� 2 ��������: ";
    cin >> age;
    students[1].setName(name);
    students[1].setAge(age);

    cout << "������� ��� 3 ��������: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(name, 40);
    cout << endl << "������� ������� 3 ��������: ";
    cin >> age;
    addStudent(students, sizeArr, name, age);
    students[0].Output();
    cout << endl;
    students[1].Output();
    cout << endl;
    students[2].Output();
}
