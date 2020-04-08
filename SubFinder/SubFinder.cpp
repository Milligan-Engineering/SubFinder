// File Name: SubFinder.cpp
// Author: Alayna Perryman
// Email Address: Amperryman@my.milligan.edu
// Assignment Number: PM09b
// Description: Program to conect teachers and substitues 
// Last changed: 03/31/20

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
//# <cstdlib>

using namespace std;

//file imput and output
ifstream instream;
ofstream outstream;


int  date, room_number, number_students, age, x, periodNumber, number_of_students[8],
final_check_teacher, final_check_sub, choiceTeacher, choiceSub, choiceSchool, SubId,
choiceMonth, choiceDay,Arrayi [31], numberi;

double dayType, numberj;

double timePeriod(double dayType, int periodNumber);
// Precondition: enter the minutes during day and divide by the number of periods
//Postconditon: returns the mins per period

void listPrint(int numberi, int Arrayi[]);
// Precondition: user enters the lenth of the array and then uses the array to 
//enters the dates that they will be missing
// Postcondition: outputs a list with the dates that user is missing 

void listPrint(double numberj, string Arrayj []);
// Precondition: user enters the length of the array and then uses the 
//array to enters the name of the student leader for each period
//Postcondition: outputs for which class period who is the leader

void sort(int a[], int periodNumber);
//Preconditions: periodnumber is the size of the array (a[o] through a[periodnumber - 1])
//Postconditions: the numbers in the array will be moved around so that the largest number will be the a[periodnumber-1]

int indexofsmallest(const int a[], int startindex, int periodNumber);
//preconditions: startindex >= 0, period number is > than startindex
//postcondtions: returns the index i so that a[i] is the smallest value

void swapValues(int& v1, int& v2);
//postconditions: interchanges the valuse of v2 and v1

const int MAXPERIOD = 8;

string  nameTeacher, month, subjectTeacher, school_location,
emailTeacher, nameSub, subjectSub, emailSub, Arrayj[10];

//char ProgrammerEmail[21];

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

			cout << "Enter your name(i.e Last,First)...";
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

			do
			{
				cout << "Enter day of the substition(i.e. 12)...";
				cin >> date;
			} while (date >= 31);
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
				cout << "Enter the number of sudents in each period..." << i << endl;
				cin >> number_of_students[i];
				totalStudents += number_of_students[i];
			}

			//working with Sorting/Seaching arrays
			
			sort(number_of_students, periodNumber);
			cout << "The largest class size will be ";
			cout << number_of_students[periodNumber - 1] <<endl;


			cout << "Enter how many days you need a subsitute for...";
			cin >> numberi;
			cout << "Enter the dates of the day or days your going to miss...\n";
			for (int i = 0; i < numberi; i++)
			{
				cin >> Arrayi [i];
			}

			// WORKING WITH VOID ARRAYS

			listPrint(numberi, Arrayi);
			
			for (int j = 0; j < periodNumber; j++)
			{
				cout << "Enter the name of the student leader for period " << j+1<<"...";
				cin >> Arrayj [j];
			}
			listPrint(periodNumber, Arrayj);
			cout << nameTeacher << endl << emailTeacher << endl << "The subsitution will take place on " << month << " " << date << endl;
			cout << "The subsitution will take place at " << school_location << " in room " << room_number << endl;
			cout << "the total number of students you have throughout the day is " << totalStudents << endl;
			cout << "Enter 1 if finished?";
			cin >> final_check_teacher;

		} while (final_check_teacher != 1);

		// using the file imput and output function 
		{
			ofstream outstream;
			outstream.open("Teacher_Request.dat");
			if (outstream.fail())
			{
				cout << "the output file opening failed.\n";
				exit(1);
			}
			outstream << nameTeacher << endl << month << endl << date << endl << school_location << endl << room_number << endl << subjectTeacher << endl << emailTeacher;
			outstream.close();
		}

		//Imputing the c-string 

		/*strcpy_s(ProgrammerEmail, "Amims123@hotmail.com");
		ofstream outstream;
		outstream.open("Teacher_Email.dat");
		if (outstream.fail())
		{
			cout << "the output file opening failed.\n";
			exit(1);
		}
		for (int i = 0; i < 21; i++)
		{
			outstream.put(ProgrammerEmail[i]);
		}
		outstream.close();*/
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
			cout << "Enter 1 if finished?";
			cin >> final_check_sub;
		} while (final_check_sub != 1);

		ifstream instream;
		instream.open("Teacher_Request.dat");
		if (instream.fail())
		{
			cout << "the imput file opening failed.\n";
			exit(1);
		}
		instream >> nameTeacher >> month >> date >> school_location >> room_number >> subjectTeacher >> emailTeacher;
		cout << "Teacher name: " << nameTeacher << " Teacher email: " << emailTeacher << " Subject: " << subjectTeacher<< endl << "Date of subsitution: " << month << " " << date << " Location of subsitution: " << school_location << " in room " << room_number;
		instream.close();

		// Outputting the c-string 

		/*ifstream instream;
		instream.open("Teacher_Email.dat");
		if (instream.fail())
		{
			cout << "the imput file opening failed.\n";
			exit(1);
		}
		for (int i = 0; i < 21; i++)
		{
			instream.get(ProgrammerEmail[i]);
			cout << ProgrammerEmail[i];
		}
		instream.close();*/
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
	string Ordinal[31] = { "st","nd","rd","th","th","th","th","th","th","th","th","th","th","th","th","th","th","th","th","th","st","nd","rd","th","th","th","th","th","th","th","st" };
	for (int i = 0; i < numberi; i++)
	{
		cout << "The " << i + 1 << Ordinal[i] << " day you will miss is the " << Arrayi[i] << Ordinal[Arrayi[i]-1] << endl;
	}
}
void listPrint(double periodnumber, string Arrayj[])
{
	for (int i = 0; i < periodNumber; i++)
	{
		cout << "the student leader of period " << i + 1 << " is " << Arrayj[i] << endl;
	}
}
void sort(int a[], int periodNumber)
{
	int indexofnextsmallest;
	for (int index = 0; index < periodNumber - 1; index++)
	{
		indexofnextsmallest = indexofsmallest(a, index, periodNumber);
		swapValues(a[index], a[indexofnextsmallest]);
	}
}
void swapValues(int& v1, int& v2)
{
	int swap;
	swap = v1;
	v1 = v2;
	v2 = swap;
}
int indexofsmallest(const int a[], int startindex, int periodNumber)
{
	int min = a[startindex];
	int indexofmin = startindex;
	for (int index = startindex + 1; index < periodNumber; index++)
		if (a[index] < min)
		{
			min = a[index];
			indexofmin = index;
		}
	return indexofmin;
}
