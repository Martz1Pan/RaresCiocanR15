#pragma once

class Student
{

	char* name;
	float math_grade, eng_grade, history_grade;
public:
	char* get_name(); // Get student's name
	void set_name(char* name); // Set student's name

	float get_math_grade(); // Get student's math grade
	void set_math_grade(float math_grade); // Set student's math grade

	float get_eng_grade(); // Get student's english grade
	void set_eng_grade(float eng_grade); // Set student's english grade

	float get_history_grade(); // Get student's history grade
	void set_history_grade(float history_grade); // Get student's history grade

	float get_avg_grade(); // Get student's average grade
};