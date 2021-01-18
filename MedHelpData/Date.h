#ifndef DATE_H
#define DATE_H

#include "Hour.h";

class Date {

	private:
		int day;
		int month;
		int year;
		Hour hour;
	public:

		Date(int, int, int, Hour);
		Date();
		void setHour(Hour);
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		int getDay();
		int getMonth();
		int getYear();
		Hour getHour();


		Date& operator=(Date& date) {

			this->day = date.day;
			this->month = date.month;
			this->year = date.year;
			this->hour = date.hour;

			return date;

		}
};

#endif;