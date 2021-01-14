#ifndef DATE_H
#define DATE_H

class Date {

	private:
		const int NULL = 0;
		int day;
		int month;
		int year;
	public:

		void setDay(int);
		void setMonth(int);
		void setYear(int);
		int getDay();
		int getMonth();
		int getYear();

};

#endif;