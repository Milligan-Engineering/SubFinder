#include "stdafx.h"
#include "Date.h"
void date::output()
{
	daylimit = 31;
	yearlimit = 2020;
	if ((day <= daylimit) && (year >= yearlimit))
	{
		cout << "The substitution will take place " << month << " / " << day << " / " << year << endl;
	}
	else
	{
		cout << "You have entered a incorrect date. Aborting Program";
		exit(1);
	}
}

// Mutator
int date::setday(int theDay)
{
	day = theDay;
	return (1);
}

//Accessor
int date::getday()
{
	return(day);
}

int date::setmonth(int themonth)
{
	string arraymonth[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	month = arraymonth[(themonth - 1)];
	return (1);
}