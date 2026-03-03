#include <iostream>
#include <string.h>

using namespace std;

#include "globals.h"
#include "student.h"

int main()
{
	Student stud1, stud2;

	char name1[50], name2[50];
	float math_grade1, math_grade2;
	float eng_grade1, eng_grade2;
	float history_grade1, history_grade2;

	//Set student's name
	cout << "Pick first's student name: ";
	cin.getline(name1, 50);
	stud1.set_name(name1);
	cout << "Pick second's student name: ";
	cin.getline(name2, 50);
	stud2.set_name(name2);

	//Set student's math grades
	cout << "Pick first's student math grade: ";
	cin >> math_grade1;
	stud1.set_math_grade(math_grade1);
	cout << "Pick second's student math grade: ";
	cin >> math_grade2;
	stud2.set_math_grade(math_grade2);

	//Set student's english grades
	cout << "Pick first's student english grade: ";
	cin >> eng_grade1;
	stud1.set_eng_grade(eng_grade1);
	cout << "Pick second's student english grade: ";
	cin >> eng_grade2;
	stud2.set_eng_grade(eng_grade2);

	//Set student's history grades
	cout << "Pick first's student history grade: ";
	cin >> history_grade1;
	stud1.set_history_grade(history_grade1);
	cout << "Pick second's student history grade: ";
	cin >> history_grade2;
	stud2.set_history_grade(history_grade2);

	//Get average grades
	float avg_grade1 = stud1.get_avg_grade(), avg_grade2 = stud2.get_avg_grade();
	
	//Sort by:
	
	int option = 0;
	cout << "What would you like to sort by?\n";
	cout << "Name -> 1\nMath grade -> 2\nEnglish grade -> 3\nHistory grade -> 4\nAverage grade -> 5\nYour choice: ";
	cin >> option;

	while(option!=-1)
	{
		switch (option)
		{
		case 1: //Name
			if (name_cmp(stud1, stud2) == 1)
			{
				cout << "Name: " << stud1.get_name() << " | " << stud2.get_name() << "\n";
				cout << "Math grade: " << stud1.get_math_grade() << " | " << stud2.get_math_grade() << "\n";
				cout << "English grade: " << stud1.get_eng_grade() << " | " << stud2.get_eng_grade() << "\n";
				cout << "History grade: " << stud1.get_history_grade() << " | " << stud2.get_history_grade() << "\n";
				cout << "Average grade: " << stud1.get_avg_grade() << " | " << stud2.get_avg_grade() << "\n";
			}
			else
			{
				cout << "Name: " << stud2.get_name() << " | " << stud1.get_name() << "\n";
				cout << "Math grade: " << stud2.get_math_grade() << " | " << stud1.get_math_grade() << "\n";
				cout << "English grade: " << stud2.get_eng_grade() << " | " << stud1.get_eng_grade() << "\n";
				cout << "History grade: " << stud2.get_history_grade() << " | " << stud1.get_history_grade() << "\n";
				cout << "Average grade: " << stud2.get_avg_grade() << " | " << stud1.get_avg_grade() << "\n";
			}
			option = -1;
			break;
		case 2: //Math grade
			if (math_grade_cmp(stud1, stud2) == 1)
			{
				cout << "Name: " << stud1.get_name() << " | " << stud2.get_name() << "\n";
				cout << "Math grade: " << stud1.get_math_grade() << " | " << stud2.get_math_grade() << "\n";
				cout << "English grade: " << stud1.get_eng_grade() << " | " << stud2.get_eng_grade() << "\n";
				cout << "History grade: " << stud1.get_history_grade() << " | " << stud2.get_history_grade() << "\n";
				cout << "Average grade: " << stud1.get_avg_grade() << " | " << stud2.get_avg_grade() << "\n";
			}
			else
			{
				cout << "Name: " << stud2.get_name() << " | " << stud1.get_name() << "\n";
				cout << "Math grade: " << stud2.get_math_grade() << " | " << stud1.get_math_grade() << "\n";
				cout << "English grade: " << stud2.get_eng_grade() << " | " << stud1.get_eng_grade() << "\n";
				cout << "History grade: " << stud2.get_history_grade() << " | " << stud1.get_history_grade() << "\n";
				cout << "Average grade: " << stud2.get_avg_grade() << " | " << stud1.get_avg_grade() << "\n";
			}
			option = -1;
			break;
		case 3: //English grade
			if (eng_grade_cmp(stud1, stud2) == 1)
			{
				cout << "Name: " << stud1.get_name() << " | " << stud2.get_name() << "\n";
				cout << "Math grade: " << stud1.get_math_grade() << " | " << stud2.get_math_grade() << "\n";
				cout << "English grade: " << stud1.get_eng_grade() << " | " << stud2.get_eng_grade() << "\n";
				cout << "History grade: " << stud1.get_history_grade() << " | " << stud2.get_history_grade() << "\n";
				cout << "Average grade: " << stud1.get_avg_grade() << " | " << stud2.get_avg_grade() << "\n";
			}
			else
			{
				cout << "Name: " << stud2.get_name() << " | " << stud1.get_name() << "\n";
				cout << "Math grade: " << stud2.get_math_grade() << " | " << stud1.get_math_grade() << "\n";
				cout << "English grade: " << stud2.get_eng_grade() << " | " << stud1.get_eng_grade() << "\n";
				cout << "History grade: " << stud2.get_history_grade() << " | " << stud1.get_history_grade() << "\n";
				cout << "Average grade: " << stud2.get_avg_grade() << " | " << stud1.get_avg_grade() << "\n";
			}
			option = -1;
			break;
		case 4: //History grade
			if (history_grade_cmp(stud1, stud2) == 1)
			{
				cout << "Name: " << stud1.get_name() << " | " << stud2.get_name() << "\n";
				cout << "Math grade: " << stud1.get_math_grade() << " | " << stud2.get_math_grade() << "\n";
				cout << "English grade: " << stud1.get_eng_grade() << " | " << stud2.get_eng_grade() << "\n";
				cout << "History grade: " << stud1.get_history_grade() << " | " << stud2.get_history_grade() << "\n";
				cout << "Average grade: " << stud1.get_avg_grade() << " | " << stud2.get_avg_grade() << "\n";
			}
			else
			{
				cout << "Name: " << stud2.get_name() << " | " << stud1.get_name() << "\n";
				cout << "Math grade: " << stud2.get_math_grade() << " | " << stud1.get_math_grade() << "\n";
				cout << "English grade: " << stud2.get_eng_grade() << " | " << stud1.get_eng_grade() << "\n";
				cout << "History grade: " << stud2.get_history_grade() << " | " << stud1.get_history_grade() << "\n";
				cout << "Average grade: " << stud2.get_avg_grade() << " | " << stud1.get_avg_grade() << "\n";
			}
			option = -1;
			break;
		case 5: //Average grade
			if (avg_grade_cmp(stud1, stud2) == 1)
			{
				cout << "Name: " << stud1.get_name() << " | " << stud2.get_name() << "\n";
				cout << "Math grade: " << stud1.get_math_grade() << " | " << stud2.get_math_grade() << "\n";
				cout << "English grade: " << stud1.get_eng_grade() << " | " << stud2.get_eng_grade() << "\n";
				cout << "History grade: " << stud1.get_history_grade() << " | " << stud2.get_history_grade() << "\n";
				cout << "Average grade: " << stud1.get_avg_grade() << " | " << stud2.get_avg_grade() << "\n";
			}
			else
			{
				cout << "Name: " << stud2.get_name() << " | " << stud1.get_name() << "\n";
				cout << "Math grade: " << stud2.get_math_grade() << " | " << stud1.get_math_grade() << "\n";
				cout << "English grade: " << stud2.get_eng_grade() << " | " << stud1.get_eng_grade() << "\n";
				cout << "History grade: " << stud2.get_history_grade() << " | " << stud1.get_history_grade() << "\n";
				cout << "Average grade: " << stud2.get_avg_grade() << " | " << stud1.get_avg_grade() << "\n";
			}
			option = -1;
			break;
		default:
			cout << "Wrong input, please try again!\n";
			cout << "What would you like to sory by?\nYour choice: ";
			cin >> option;
		}
	}

	return 0;
}