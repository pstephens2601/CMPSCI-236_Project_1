#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
	setYear(1970);
	setMonth("jan");
	setDay(1);
}

//build in error catching for invalid inputs
Date::Date(int newDay, string newMonth, int newYear) {
	setYear(newYear);
	setMonth(newMonth);
	setDay(newDay);
}

void Date::setDay(int newDay) {
	if (newDay > 0 && newDay < getNumDays()) {
		day = newDay;
	}
	else {
		day = 32;
	}
}

int Date::getDay() {
	return day;
}

void Date::setMonth(string newMonth) {
	month = newMonth;
}

string Date::getMonth() {
	return month;
}

void Date::setYear(int newYear) {
	if (newYear > 0 && newYear < 9999) {
		year = newYear;
	}
}

int Date::getYear() {
	return year;
}

string Date::toString() {
	std::string output = "The Date Object is: " + month + ", " + std::to_string(day) + " " + std::to_string(year);
	return output;
}

int Date::getMonthNum() {

	string months[] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "nov", "dec" };

	for (int i = 0; i < (sizeof(months) / sizeof(*months)); i++) {

		if (month == months[i]) {
			return ++i;
		}
	}
}

int Date::getNumDays() {

	int monthNumber = getMonthNum();

	switch (monthNumber) {
	case 1:
		return 31;
		break;
	case 2:
		if (year % 4 == 0) {
			return 28;
		}
		else {
			return 29;
		}
		break;
	case 3:
		return 31;
		break;
	case 4:
		return 30;
		break;
	case 5:
		return 31;
		break;
	case 6:
		return 30;
		break;
	case 7:
		return 31;
		break;
	case 8:
		return 31;
		break;
	case 9:
		return 30;
		break;
	case 10:
		return 31;
		break;
	case 11:
		return 30;
		break;
	case 12:
		return 31;
		break;
	}
}