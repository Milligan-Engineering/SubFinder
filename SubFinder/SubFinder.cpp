// File Name: SubFinder.cpp
// Author: Alayna Perryman
// Email Address: Amperryman@my.milligan.edu
// Assignment Number: PM03
// Description: Program to conect teachers and substitues 
// Last changed: 02/04/20

#include <iostream>
#include <string>
using namespace std;

int  date, room_number, number_students, age, x;
string  nameTeacher, month, subjectTeacher, school_location, emailTeacher, nameSub, subjectSub, emailSub;

int main()
{
	cout << "If you are a teacher please enter 1, if you are a substitute please enter 0...";
	cin >> x;
	if (x > 0)
	{
		cout << "welcome teacher\n";
		cout << "note: when entering in your information please use no spaces and no capital letters\n";
		cout << "Enter your name...";
		cin >> nameTeacher;
		cout << "Enter your email address...";
		cin >> emailTeacher;
		cout << "Enter month of substition(i.e. Feduary)...";
		cin >> month;
		cout << "Enter day of the substition(i.e. 12)...";
		cin >> date;
		cout << "Enter the subject...";
		cin >> subjectTeacher;
		cout << "Enter school location(i.e. NGS)...";
		cin >> school_location;
		cout << "Enter room number...";
		cin >> room_number;
		cout << "Enter the average number of studnts you have during a day...";//you are supposed to enter the average amout of studenst you have in a single class period
		cin >> number_students;
		cout << "Enter how old are a majority of the students...";
		cin >> age;
		cout << "The assumed level of difficulty for subing" << " " << nameTeacher << " " << "class is... ";
		cout << (number_students * age);
	}
	else
	{
		cout << "welcome substitute\n";
		cout << "note: when entering in your information please use no spaces and no capital letters\n";
		cout << "Enter your name...";
		cin >> nameSub;
		cout << "Enter your preferred subject...";
		cin >> subjectSub;
		cout << "Enter email...";
		cin >> emailSub;
	}
	return 0;
}
