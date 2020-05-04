class date
{
public:
	void output();
	string month;

	int year;

	// Mutator
	int setday(int theDay);

	//Accessor
	int getday();

	int setmonth(int themonth);


private:
	int monthlimit;
	int daylimit;
	int yearlimit;
	int day;
};