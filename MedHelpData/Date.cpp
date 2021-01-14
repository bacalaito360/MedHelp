#include "Date.h"

void Date::setDay(int day) {
	try {

		if (day < 1 || day > 31) {

			throw ("Error: Invalid date (day).");
		}
		else {
			this->day = day;
		}
	}
	catch(){

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
	catch(){

		this->month = NULL;
	}
}