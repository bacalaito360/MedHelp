#ifndef HOUR_H
#define HOUR_H

#include <string>

using namespace::std;

class Hour {

	private:

		int hour;
		int minutes;
		int seconds;

	public:

		Hour(int, int, int);
		Hour();
		void setHour(int);
		void setMinutes(int);
		void setSeconds(int);
		int getHour();
		int getMinutes();
		int getSeconds();
		string getTime();

		Hour& operator=(Hour& hour) {

			this->hour = hour.hour;
			this->minutes = hour.minutes;
			this->seconds = hour.seconds;

			return hour;

		}
};

#endif;