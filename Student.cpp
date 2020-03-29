#include<iostream>
#include<string>
#include"Student.h"
#include<iomanip>
Student::Student(int id,const std::string& name):id_(id),name_(name){}
Student::Student(const Student&s):id_(s.id_) {}
void Student::SetId_(int id) { id_ = id; };
int Student::GetId_() const { return id_; };
void Student::SetName_(const std::string& name) { name_ = name; };
std::string Student::GetName_() const { return name_; };
bool Student::AddCourse(const std::string& courseName, double grade,int count) {
	if (count <= maxCourses_) {
		grades_[count-1] = grade;
		courseNames_[count-1] = courseName;
		return true;
	}
	else return false;
}
void Student::SetGrade(const std::string& courseName, const double grades[maxCourses_]) {
	for (int Courses_ = 0; Courses_ < maxCourses_; Courses_++)
		grades_[Courses_] = grades[Courses_];
}
double Student::GetAverageGrade() const{
	double total = 0;
	for (int Course_ = 0; Course_ < maxCourses_; Course_++)
		total += grades_[Course_];
	return static_cast<double>(total) / maxCourses_;
}
double Student::GetGrade(const std::string& courseName,int x) const {
	return grades_[x];
};
void Student::ShowGrades()const {	std::cout << std::setw(6)<< name_;
	std::cout << " " << id_;
	for (int Course_=0; Course_ < maxCourses_; Course_++)
		std::cout <<"    "<<std::setiosflags(std::ios::right)<< grades_[Course_];
	std::cout << std::endl;

}