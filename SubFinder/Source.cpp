#include <iostream>
#include <string>
using namespace std;

int  date, room_number, number_students, age, x;
string  name, month, subject, school_location, email;

int main()
{
	cout << "If you are a teacher please enter 1, if you are a substitute please enter 0...";
	cin >> x;
	if (x > 0)
	{
		cout << "welcome teacher\n";
		cout << "note: when entering in your information please use no spaces and no capital letters\n";
		cout << "Enter your name...";
		cin >> name;
		cout << "Enter your email address...";
		cin >> email;
		cout << "Enter month of substition(i.e. Feduary)...";
		cin >> month;
		cout << "Enter day of the substition(i.e. 12)...";
		cin >> date;
		cout << "Enter the subject...";
		cin >> subject;
		cout << "Enter school location(i.e. NGS)...";
		cin >> school_location;
		cout << "Enter room number...";
		cin >> room_number;
		cout << "Enter how many students you will have during the day...";
		cin >> number_students;
		cout << "Enter how old are a majority of the students...";
		cin >> age;
		cout << "The assumed level of difficulty for subing" << " " << name << " " << "class is... ";
		cout << (number_students * age);
	}
	else
	{
		cout << "welcome substitute\n";
	}
	return 0;
}
