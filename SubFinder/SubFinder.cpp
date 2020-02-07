// File Name: SubFinder.cpp
// Author: Alayna Perryman
// Email Address: Amperryman@my.milligan.edu
// Assignment Number: PM04
// Description: Program to conect teachers and substitues 
// Last changed: 02/06/20

#include <iostream>
#include <string>
using namespace std;

int  date, room_number, number_students, age, x, periodNumber, a[8], ft,fs;
const int MAXPERIOD = 8;
string  nameTeacher, month, subjectTeacher, school_location, emailTeacher, nameSub, subjectSub, emailSub;

int main()
{
	cout << "If you are a teacher please enter 1, if you are a substitute please enter 0...";
	cin >> x;
	if (x==1)
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
		cout << "Enter the subject...";
		cin >> subjectTeacher;
		cout << "Enter school location(i.e. ngs)...";
		cin >> school_location;
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
					cout << "Enter the number of sudents in each period..." << i << endl; //these should be enter in order, so the first number of students
					//you put in that should be your first period 
					cin >> a[i];
					totalStudents += a[i];
				}
				cout << "if the following information is correct please enter 1\n";
				cout << nameTeacher << endl << emailTeacher << endl << "The subsitution will take place on " << month << " " << date << endl;
				cout << "The subsitution will take place at " << school_location << " in room " << room_number << endl;
				cout << "the total number of students you have throughout the day is " << totalStudents<<endl;
				//I would like to add a way to show the total about of students they would have from adding up all the imputs from the array
				cin >> ft;
					if (ft==1)
					{
						cout << "thank you for using SubFinder, we will be sending you a email once your job has been taken\nhave a nice day :)";
						return 0;
					}
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
		cout << "If the following information is correct please enter 1\n";
		cout << nameSub << endl << emailSub << endl << "Your perferred subject is " << subjectSub << endl;
		cin >> fs;
			if (fs==1)
			{
				cout << "thank you for using subfinder, here is a list of available job opportunities\nhave a nice day :)";
				return 0;
			}
	}
}
