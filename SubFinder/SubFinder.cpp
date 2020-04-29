// File Name: SubFinder.cpp
// Author: Alayna Perryman
// Email Address: Amperryman@my.milligan.edu
// Assignment Number: PM13
// Description: Program to conect teachers and substitues 
// Last changed: 04/27/20

#include "stdafx.h"
#include "Date.h"

//file imput and output

ifstream instream;
ofstream outstream;

double timePeriod(double dayType, int periodNumber);
// Precondition: enter the minutes during day and divide by the number of periods
//Postconditon: returns the mins per period

int  room_number, number_students, age, x, periodNumber, number_of_students[8],
final_check_teacher, final_check_sub, choiceTeacher, choiceSub, choiceSchool, Arrayi [31], numberi;

double dayType, numberj;

string nameTeacher, month, subjectTeacher, school_location,
emailTeacher, nameSub, subjectSub, emailSub, Arrayj[10];

char choiceDay, subID[9];

int main()
{
	date teacherDate;
	cout << "If you are a teacher please enter 1, if you are a substitute please enter 0...";
	cin >> x;
	while (x != 1 && x != 0)
	{
		cout << "This is not a valid imput, please enter 1 for teacher and 0 for sub...";
		cin >> x;
	}
	if (x == 1)
	{
		do
		{
			cout << "welcome teacher\n";

			cout << "note: when entering in your information please use no spaces and no capital letters\n";

			cout << "Enter your name(i.e Last,First)...";
			cin >> nameTeacher;

			cout << "Enter your email address...";
			cin >> emailTeacher;

			cout << "Type the month of substition...";
			cin >> teacherDate.month;

			cout << "Enter the date of month of substition (i.e. 20)...";
			cin >> teacherDate.day;

			cout << "Enter the year of the substition (i.e. 2020)...";
			cin >> teacherDate.year;

			teacherDate.output();

			do
			{
				cout << "Select the subject\n";
				cout << "Choose 1 to select MATH. \n"
					<< "Choose 2 to select ENGLISH. \n"
					<< "Choose 3 to select HISTORY. \n"
					<< "Choose 4 to selcet SCIENCE. \n"
					<< "Choose 5 to selcet OTHER. \n";
				cin >> choiceTeacher;
				switch (choiceTeacher)
				{
				case 1:
					subjectTeacher = "math";
					break;
				case 2:
					subjectTeacher = "english";
					break;
				case 3:
					subjectTeacher = "history";
					break;
				case 4:
					subjectTeacher = "science";
					break;
				case 5:
					subjectTeacher = "other";
					break;
				}
			} while (choiceTeacher > 5);

			do
			{
				cout << "Select the school location\n";
				cout << "Choose 1 to select NGS \n"
					<< "Choose 2 to select CCHS \n"
					<< "Choose 3 to select CHS \n"
					<< "Choose 4 to selcet EMS \n"
					<< "Choose 5 to selcet OTHER. \n";
				cin >> choiceSchool;
				switch (choiceSchool)
				{
				case 1:
					school_location = "NGS";
					break;
				case 2:
					school_location = "CCHS";
					break;
				case 3:
					school_location = "CHS";
					break;
				case 4:
					school_location = "EMS";
					break;
				case 5:
					school_location = "other";
					break;
				}
			} while (choiceSchool > 5);

			cout << "Enter room number...";
			cin >> room_number;

			cout << "Select the type of day\n";
			cout << "Type 'F' if it will be a FULL DAY\n"
				<< "Type 'H' if it will be a HALF DAY\n";
			cin >> choiceDay;

			switch (choiceDay)
			{
			case 'F':
				dayType = 420.0;
				break;
			case 'H':
				dayType = 210.0;
				break;
			}

			cout << "Enter how many class periods there will be...";
			cin >> periodNumber;

			// max period check

			while (periodNumber > MAXPERIOD)
			{
				cout << "this is a invalid period number, please enter the amount of class periods you have in a day...";
				cin >> periodNumber;
			}

			//working with Arrays, userdefined functions, and predefined functions

			cout << "Each period will be " << ceil (timePeriod(dayType, periodNumber)) << " mins long.\n";
			int totalStudents = 0;
			for (int i = 0; i < periodNumber; i++)
			{
				cout << "Enter the number of sudents in period " << (i +1) << endl;
				cin >> number_of_students[i];
				totalStudents += number_of_students[i];
			}

			//working with a multidimensional array

			string student_name_list[99][99];
			int index1, index2;
			for (index1 = 0; index1 < periodNumber; index1++)
			{
				for (index2 = 0; index2 < number_of_students[index1]; index2++)
				{
					cout << "type the name of student " << index2 + 1 << " for period " << index1 + 1 << endl;
					cin >> student_name_list[index1][index2];
				}
			}
			cout << student_name_list[1][1] << endl;

			cout << nameTeacher << endl << emailTeacher << endl;
			cout << "The subsitution will take place at " << school_location << " in room " << room_number << endl;
			cout << "the total number of students you have throughout the day is " << totalStudents << endl;
			cout << "Enter 1 if finished?";
			cin >> final_check_teacher;

		} while (final_check_teacher != 1);

		// using the file imput and output function 
		{
			ofstream outstream;
			outstream.open("Teacher_Request1.dat");
			if (outstream.fail())
			{
				cout << "the output file opening failed.\n";
				exit(1);
			}
			outstream << nameTeacher << endl << school_location << endl << room_number << endl << subjectTeacher << endl << emailTeacher;
			outstream.close();
		}
	}

	else if (x == 0)
	{
		do
		{
			cout << "welcome substitute\n";
			cout << "note: when entering in your information please use no spaces and no capital letters\n";

			cout << "Enter your name...";
			cin >> nameSub;

			cout << "Enter your sub id # (after each character press enter)\n";
			for(int i = 0;  i < 8; i++)
			{
				char tempC;
				cin >> tempC;
				subID[i] = tempC;
			}

			do
			{
				cout << "Enter your preferred subject\n";
				cout << "Choose 1 to select MATH. \n"
					<< "Choose 2 to select ENGLISH. \n"
					<< "Choose 3 to select HISTORY. \n"
					<< "Choose 4 to selcet SCIENCE. \n"
					<< "Choose 5 to selcet OTHER. \n";
				cin >> choiceSub;
				switch (choiceSub)
				{
				case 1:
					subjectSub = "math";
					break;
				case 2:
					subjectSub = "english";
					break;
				case 3:
					subjectSub = "history";
					break;
				case 4:
					subjectSub = "science";
					break;
				case 5:
					subjectSub = "other";
					break;
				}
			} while (choiceSub > 5);

			cout << "Enter email...";
			cin >> emailSub;
			cout << "Enter 1 if finished?";
			cin >> final_check_sub;
		} while (final_check_sub != 1);

		ifstream instream;
		instream.open("Teacher_Request1.dat");
		if (instream.fail())
		{
			cout << "the imput file opening failed.\n";
			exit(1);
		}
		instream >> nameTeacher >> school_location >> room_number >> subjectTeacher >> emailTeacher;
		cout << "Teacher name: " << nameTeacher << endl<< "Teacher email: " << emailTeacher << endl<< "Subject: " << subjectTeacher<< endl << "Location of subsitution: " << school_location <<" in room " << room_number;
		instream.close();

	}
}

//function declaration 

double timePeriod(double dayType, int periodNumber)
{
	double periodtime = (dayType / periodNumber);
	return (periodtime);
}

