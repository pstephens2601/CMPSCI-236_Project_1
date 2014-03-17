/* Patick Stephens
*
*
*
*
*
*/

#include <string>
using namespace std;

//This class creates a basic date object with values for day, month, and year.

class Date {

private:
	int day;
	string month;
	int year;

public:
	Date();
	Date(int day, string month, int year);
	void setDay(int newDay);
	int getDay();
	void setMonth(string newMonth);
	string getMonth();
	void setYear(int newYear);
	int getYear();
	string toString();

private:
	int getMonthNum();
	int getNumDays();
};