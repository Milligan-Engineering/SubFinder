// File Name: SubFinder.cpp
// Author: Alayna Perryman
// Email Address: Amperryman@my.milligan.edu
// Assignment Number: PM05
// Description: Program to conect teachers and substitues 
// Last changed: 02/13/20

#include <iostream>
#include <string>
using namespace std;

int  date, room_number, number_students, age, x, periodNumber, number_of_students[8], 
final_check_teacher, final_check_sub, choiceTeacher, choiceSub, choiceSchool,SubId;
const int MAXPERIOD = 8;
string  nameTeacher, month, subjectTeacher, school_location, emailTeacher, nameSub, subjectSub, emailSub;

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
			cout << "Enter month of substition(i.e. october)...";
			cin >> month;
			cout << "Enter day of the substition(i.e. 12)...";
			cin >> date;
			cout << "Enter the subject\n";
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
			cout << "Enter the school location\n";
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
			cout << "Enter room number...";
			cin >> room_number;
			cout << "Enter how many class periods there will be...";
			cin >> periodNumber;
			while (periodNumber > MAXPERIOD)
			{
				cout << "this is a invalid period number, please enter the amount of class periods you have in a day...";
				cin >> periodNumber;
			}
			int totalStudents = 0;
			for (int i = 0; i < periodNumber; i++)
			{
				cout << "Enter the number of sudents in each period..." << i << endl;
				cin >> number_of_students[i];
				totalStudents += number_of_students[i];
			}
			cout << nameTeacher << endl << emailTeacher << endl << "The subsitution will take place on " << month << " " << date << endl;
			cout << "The subsitution will take place at " << school_location << " in room " << room_number << endl;
			cout << "the total number of students you have throughout the day is " << totalStudents << endl;
			cout << "Enter 1 if finished?";
			cin >> final_check_teacher;
		} while (final_check_teacher != 1);
	}
	else if (x==0)
	{
		cout << "welcome substitute\n";
		cout << "note: when entering in your information please use no spaces and no capital letters\n";
		cout << "Enter your name...";
		cin >> nameSub;
		cout << "Enter your sub id #";
		cin >> SubId;
		cout << "Enter your preferred subject...";
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
		cout << "Enter email...";
		cin >> emailSub;
		cout << nameSub << endl << SubId << endl<< emailSub << endl << "Your perferred subject is " << subjectSub << endl;
		cout << "Enter 1 if finished?";
		cin >> final_check_sub;
			if (final_check_sub == 1)
			{
				cout << "thank you for using subfinder, here is a list of available job opportunities\nhave a nice day :)";
				return 0;
			}
	}
}