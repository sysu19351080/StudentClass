#pragma once
#include<iostream>
class Student{
	friend class StudentClass;
	static const int maxCourses_ = 3;
	int id_;
    std::string name_;
    std::string courseNames_[maxCourses_];
    double grades_[maxCourses_];
public:
	Student(int id, const std::string& name);
	Student(const Student&s);
	void SetId_(int id);
	int GetId_() const ;
	void SetName_(const std::string& name);
	std::string GetName_() const;
	bool AddCourse(const std::string& courseName, double grade,int count);
	void SetGrade(const std::string& courseName, const double grades[maxCourses_]);
	double GetGrade(const std::string& courseName,int x) const;
	double GetAverageGrade() const;
	void ShowGrades() const;
};
