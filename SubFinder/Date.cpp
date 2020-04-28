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
		cout << "You have entered a incorrect date. aborting Program";
		exit(1);
	}
}