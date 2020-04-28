#include "stdafx.h"
#include "Date.h"
void date::month()
{
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
			months = "January";
			break;
		case 2:
			months = "February";
			break;
		case 3:
			months = "March";
			break;
		case 4:
			months = "April";
			break;
		case 5:
			months = "May";
			break;
		case 6:
			months = "June";
			break;
		case 7:
			months = "July";
			break;
		case 8:
			months = "August";
			break;
		case 9:
			months = "September";
			break;
		case 10:
			months = "October";
			break;
		case 11:
			months = "November";
			break;
		case 12:
			months = "December";
			break;
		}
	} while (choiceMonth > 12);
	cout << months << endl;
}