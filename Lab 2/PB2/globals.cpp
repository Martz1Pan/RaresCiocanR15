#include "globals.h"
#include "student.h"

int name_cmp(Student stud1, Student stud2)
{
	char* name1 = stud1.get_name();
	char* name2 = stud2.get_name();

	while (*name1 != '\0' && *name2 != '\0')
	{
		if (*name1 > *name2)
			return 1;
		else if (*name1 < *name2)
			return -1;
		else
		{
			name1++;
			name2++;
		}
	}

	if (*name1 == '\0' && *name2 != '\0')
		return -1;
	if (*name1 != '\0' && *name2 == '\0')
		return 1;
	return 0;
}

int math_grade_cmp(Student stud1, Student stud2)
{
	float math_grade1 = stud1.get_math_grade();
	float math_grade2 = stud2.get_math_grade();

	if (math_grade1 > math_grade2)
		return 1;
	else if (math_grade1 < math_grade2)
		return -1;
	else return 0;
}

int eng_grade_cmp(Student stud1, Student stud2)
{
	float eng_grade1 = stud1.get_eng_grade();
	float eng_grade2 = stud2.get_eng_grade();

	if (eng_grade1 > eng_grade2)
		return 1;
	else if (eng_grade1 < eng_grade2)
		return -1;
	else return 0;
}

int history_grade_cmp(Student stud1, Student stud2)
{
	float history_grade1 = stud1.get_history_grade();
	float history_grade2 = stud2.get_history_grade();

	if (history_grade1 > history_grade2)
		return 1;
	else if (history_grade1 < history_grade2)
		return -1;
	else return 0;
}

int avg_grade_cmp(Student stud1, Student stud2)
{
	float avg_grade1 = stud1.get_avg_grade();
	float avg_grade2 = stud2.get_avg_grade();

	if (avg_grade1 > avg_grade2)
		return 1;
	else if (avg_grade1 < avg_grade2)
		return -1;
	else return 0;
}