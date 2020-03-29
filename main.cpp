#include<iostream>
#include"Student.h"
#include"Studentclass.h"
int StudentClass::studentCount_ = 0;
bool ascending(int, int);
bool descending(int, int);
int main() {
	Student s1(19350001, "Bob");
	Student s2(19350000, "John");
	Student s3(19350002, "Alice");
	Student students[3] = { s1,s2,s3 };
	int x[sizeof(students)] = { s1.GetId_(),s2.GetId_(),s3.GetId_() };
	s1.AddCourse("Robotics", 91.0,1);
	s1.AddCourse("C++", 97.0,2);
	s1.AddCourse("Maths", 94.0,3);
	s2.AddCourse("Robotics", 99.0,1);
	s2.AddCourse("C++", 96.0,2);
	s2.AddCourse("Maths", 93.0,3);
	s3.AddCourse("Robotics", 98.0,1);
	s3.AddCourse("C++", 95.0,2);
	s3.AddCourse("Maths", 92.0,3);
	std::cout << "  name    id    Robotics  C++  Maths" << std::endl;
	s1.ShowGrades();
	s2.ShowGrades();
	s3.ShowGrades();
	StudentClass sc("ise201901");
	sc.AddStudent(students);
	sc.ShowStudentsByIdOrder(x,sizeof students,ascending);
	sc.ShowStudentsByIdOrder(x, sizeof students, descending);
	sc.showStudentCount();
	return 0;
}
bool ascending(int a, int b) {
	return a > b;
}
bool descending(int a, int b) {
	return a < b;
}