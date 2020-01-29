#include <iostream>
#include <string>
using namespace std;

int  date, room_number, number_students, Age;
string  name, month, subject, school_location;

int main()
{
	cout << "welcome teacher\n";
	cout << "Enter your name...";
	cin >> name;
	cout << "Enter month of substition(i.e. Feduary)...";
	cin >> month;
	cout << "Enter day of the substition(i.e. 12)...";
	cin >> date;
	cout << "Enter the subject...";
	cin >> subject;
	cout << "Enter school location(NGS)...";
	cin >> school_location;
	cout << "Enter room number...";
	cin >> room_number;
	cout << "Enter how many students you will have during the day...";
	cin >> number_students;
	cout << "Enter how old are a majority of the students...";
    cin >> Age;
	cout << "The assumed level of difficulty for subing"<<" "<<name<<" "<<"class is... ";
	cout << (number_students * Age);
	return 0;
}
