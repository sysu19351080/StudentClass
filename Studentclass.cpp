#include<iostream>
#include"Studentclass.h"
#include"Student.h"
StudentClass::StudentClass(std::string code) :code_(code) {};
StudentClass::StudentClass(const StudentClass&s) :code_(s.code_) {};
StudentClass::~StudentClass() {};
void StudentClass::Setcode(std::string code) { code_ = code; };
std::string StudentClass::Getcode() const { return code_; };
bool StudentClass::AddStudent(const Student *student) {
	int count = sizeof(student);
	if (count > 20)return false;
	else {
		studentCount_ += count;
		return true;
	}
}
void StudentClass::ShowStudent(int id) const {
	
}
void StudentClass::ShowStudentsByIdOrder(int x[],const int y,bool(*compare)(int , int)) {
	int a;
	for (int i = 0; i < y-1; i++) {
		a = i;
		for (int j = i + 1; j < y; j++)
			if (!(*compare)(x[a], x[j]))
				a = j;
		swap(&x[a], &x[i]);
	}
	
};
void StudentClass::showStudentCount() {
	std::cout << studentCount_ -1<< std::endl;
}
void StudentClass::swap(int* const x, int* const y) {
	int z = *x;
	*x = *y;
	*y = z;
}