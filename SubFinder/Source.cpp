#include <iostream>
#include <string>
using namespace std;

int date, room_number;
string name, month, subject, school_location;
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
	return 0;
}
