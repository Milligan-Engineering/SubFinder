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


private:
	int daylimit;
	int yearlimit;
	int day;
};