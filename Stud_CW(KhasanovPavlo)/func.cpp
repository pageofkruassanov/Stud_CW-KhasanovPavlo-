#include "func.h"

void addStudent(Student*& stud, int& sizeArr, const char* name, int age)
{
	sizeArr++;
	Student* tempStud = new Student[sizeArr];
	for (int i = 0; i < sizeArr - 1; i++) {
		tempStud[i] = stud[i];
	}
	tempStud[sizeArr - 1].setName(name);
	tempStud[sizeArr - 1].setAge(age);
	stud = tempStud;
}
