class date
{
public:
	void output();
	string month;

	int year;

	// Mutator
	int setday(int theDay);
	//postconditions: returns that chosen date for subsitution

	//Accessor
	int getday();
	//postcondition: returns the private value day

	//mutator
	int setmonth(int themonth);
	//Preconditions: user enters the number month
	//Postconditions: outputs the string month name

private:
	int daylimit;
	int yearlimit;
	int day;
	string arraymonth[12];
};