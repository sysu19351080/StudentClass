#pragma once
#include<iostream>
#include"Student.h"
class StudentClass {
	static const int maxStudents_ = 20;
	static int studentCount_;
	std::string code_;
	Student* students_[maxStudents_];
public:
	StudentClass(std::string code);
	StudentClass(const StudentClass&s);
	~StudentClass();
	void Setcode(std::string code);
	std::string Getcode() const;
	bool AddStudent(const Student *student);
	void ShowStudent(int id) const;
	void ShowStudentsByIdOrder(int x[], const int y, bool(*compare)(int, int));
	static void showStudentCount();
	void swap(int* const x, int* const y);
};
