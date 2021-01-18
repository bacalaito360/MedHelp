#include "Date.h"
#include <string.h>
#include <string>

using namespace::std;

Date::Date(int day, int month, int year, Hour hour) {

	try {

		if (day < 1 || day > 31) {

			throw ("Error: Invalid date (day).");
		}
		else {
			this->day = day;
		}
	}
	catch (string e) {

		this->day = NULL;
	}
	try {

		if (month < 1 || month > 12) {

			throw ("Error: Invalid date (month).");
		}
		else {
			this->month = month;
		}
	}
	catch (string e) {

		this->month = NULL;
	}
	this->year = year;
	this->hour = hour;
}

Date::Date() {

	day = 0;
	month = 0;
	year = 0;
	hour.setHour(0);
	hour.setMinutes(0);
	hour.setSeconds(0);
}

void Date::setDay(int day) {
	try {

		if (day < 1 || day > 31) {

			throw ("Error: Invalid date (day).");
		}
		else {
			this->day = day;
		}
	}
	catch(string e){

		this->day = NULL;
	}
}

void Date::setMonth(int month) {

	try {

		if (month < 1 || month > 12) {

			throw ("Error: Invalid date (month).");
		}
		else {
			this->month = month;
		}
	}
	catch(string e){

		this->month = NULL;
	}
}

void Date::setYear(int year) {

	this->year = year;
}

void Date::setHour(Hour hour) {

	this->hour = hour;
}

int Date::getDay() {

	return day;
}

int Date::getMonth() {

	return month;
}

int Date::getYear() {

	return year;
}

Hour Date::getHour() {

	return hour;
}