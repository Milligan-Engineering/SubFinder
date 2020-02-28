// File Name: SubFinder.cpp
// Author: Alayna Perryman
// Email Address: Amperryman@my.milligan.edu
// Assignment Number: PM07
// Description: Program to conect teachers and substitues 
// Last changed: 02/26/20

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int  date, room_number, number_students, age, x, periodNumber, number_of_students[8],
final_check_teacher, final_check_sub, choiceTeacher, choiceSub, choiceSchool, SubId,
choiceMonth, choiceDay, Arrayi[10];
double dayType;
double timePeriod(double dayType, int periodNumber);
// Precondition: enter the minutes during day and divide by the number of periods
//Postconditon: returns the mins per period
void listPrint(int numberi, int Arrayi[]);
void listPrint(double Arrayj [], double numberj );
const int MAXPERIOD = 8;
string  nameTeacher, month, subjectTeacher, school_location, emailTeacher, nameSub, subjectSub, emailSub, Arrayj [10];

int main()
{
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
			cout << "Enter your name(i.e. miss.conners)...";
			cin >> nameTeacher;
			cout << "Enter your email address...";
			cin >> emailTeacher;
			do
			{
				cout << "Select month of substition\n";
				cout << "Choose 1 for JANUARY.\n"
					<< "Choose 2 for FEBRUARY.\n"
					<< "Choose 3 for MARCH.\n"
					<< "Choose 4 for APRIL.\n"
					<< "Choose 5 for MAY.\n"
					<< "Choose 6 for JUNE.\n"
					<< "Choose 7 for JULY.\n"
					<< "Choose 8 for AUGUST.\n"
					<< "Choose 9 for SEPTEMBER.\n"
					<< "Choose 10 for OCTOBER.\n"
					<< "Choose 11 for NOVEMBER.\n"
					<< "Choose 12 for DECEMBER.\n";
				cin >> choiceMonth;
				switch (choiceMonth)
				{
				case 1:
					month = "January";
					break;
				case 2:
					month = "February";
					break;
				case 3:
					month = "March";
					break;
				case 4:
					month = "April";
					break;
				case 5:
					month = "May";
					break;
				case 6:
					month = "June";
					break;
				case 7:
					month = "July";
					break;
				case 8:
					month = "August";
					break;
				case 9:
					month = "September";
					break;
				case 10:
					month = "October";
					break;
				case 11:
					month = "November";
					break;
				case 12:
					month = "December";
					break;
				}
			} while (choiceMonth > 12);
			cout << "Enter day of the substition(i.e. 12)...";
			cin >> date;
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
			do
			{
				cout << "Select the type of day\n";
				cout << "Enter 1 if it will be a FULL DAY\n"
					<< "Enter 2 if it will be a HALF DAY\n";
				cin >> choiceDay;
				switch (choiceDay)
				{
				case 1:
					dayType = 420.0;
					break;
				case 2:
					dayType = 210.0;
					break;
				}
			} while (choiceDay > 2);
			cout << "Enter how many class periods there will be...";
			cin >> periodNumber;
			
			while (periodNumber > MAXPERIOD)
			{
				cout << "this is a invalid period number, please enter the amount of class periods you have in a day...";
				cin >> periodNumber;
			}
			cout << "Each period will be " << ceil (timePeriod(dayType, periodNumber)) << " mins long.\n";
			int totalStudents = 0;
			for (int i = 0; i < periodNumber; i++)
			{
				cout << "Enter the number of sudents in each period..." << i << endl;
				cin >> number_of_students[i];
				totalStudents += number_of_students[i];
			}
			cout << number_of_students[2];
			cout << "Enter how many days you need a subsitute for...";
			int numberi;
			cin >> numberi;
			for (int i = 0; i < numberi; i++)
			{
				cin >> Arrayi[i];
			}
			/*cout << "Enter the dates of the day or days your going to miss...";
			for (int i = 0; i < numberi; i++)
			{
				cin >> Arrayi [i];
			}*/
			listPrint(numberi, Arrayi);
			cout << "Enter how many periods there will be...";
			int numberj;
			cin >> numberj;
			for (int j = 0; j < numberj; j++)
			{
				cout << "Enter the student leader for period " << j+1<<"...";
				cin >> Arrayj [j];
			}
			listPrint(numberj, Arrayj);
			cout << nameTeacher << endl << emailTeacher << endl << "The subsitution will take place on " << month << " " << date << endl;
			cout << "The subsitution will take place at " << school_location << " in room " << room_number << endl;
			cout << "the total number of students you have throughout the day is " << totalStudents << endl;
			cout << "Enter 1 if finished?";
			cin >> final_check_teacher;
		} while (final_check_teacher != 1);
	}
	else if (x == 0)
	{
		do
		{
			cout << "welcome substitute\n";
			cout << "note: when entering in your information please use no spaces and no capital letters\n";
			cout << "Enter your name...";
			cin >> nameSub;
			cout << "Enter your sub id #";
			cin >> SubId;
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
			cout << nameSub << endl << SubId << endl << emailSub << endl << "Your perferred subject is " << subjectSub << endl;
			cout << "Enter 1 if finished?";
			cin >> final_check_sub;
		} while (final_check_sub != 1);
	}
}
//function declaration 
double timePeriod(double dayType, int periodNumber)
{
	double periodtime = (dayType / periodNumber);
	return (periodtime);
}
void listPrint(int numberi, int Arrayi [])
{
	for (int i = 0; i < numberi; i++)
	{
		cout << "The " << i + 1 << "day you will miss is the " << Arrayi[i]<< endl;
	}
}
void listPrint(int numberj, string Arrayj[])
{
	for (int i = 0; i < numberj; i++)
	{
		cout << "the student leader of period " << i + 1 << " is " << Arrayj[i] << endl;
	}
}