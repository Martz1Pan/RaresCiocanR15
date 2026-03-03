#include "student.h"

char* Student::get_name()
{
	return name;
}

void Student::set_name(char* name)
{
	this->name = name;
}

float Student::get_math_grade()
{
	return this->math_grade;
}

void Student::set_math_grade(float math_grade)
{
	if (math_grade <= 10.0 && math_grade >= 0.0)
		this->math_grade = math_grade;
	else this->math_grade = 10.0;
}

float Student::get_eng_grade()
{
	return this->eng_grade;
}

void Student::set_eng_grade(float eng_grade)
{
	if (eng_grade <= 10.0 && eng_grade >= 0.0)
		this->eng_grade = eng_grade;
	else this->eng_grade = 10.0;
}

float Student::get_history_grade()
{
	return this->history_grade;
}

void Student::set_history_grade(float history_grade)
{
	if (history_grade <= 10.0 && history_grade >= 0.0)
		this->history_grade = history_grade;
	else this->history_grade = 10.0;
}

float Student::get_avg_grade()
{
	return (math_grade + eng_grade + history_grade) / 3;
}