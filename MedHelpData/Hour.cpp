#include "Hour.h"

Hour::Hour(int hour, int minutes, int seconds) {
	try {

		if (hour < 0 || hour > 23) {

			throw ("Error: Invalid hour.");
		}
		else {
			this->hour = hour;
		}
	}
	catch (string e) {

		this->hour = NULL;
	}
	try {

		if (minutes < 0 || minutes > 59) {

			throw ("Error: Invalid minutes.");
		}
		else {
			this->minutes = minutes;
		}
	}
	catch (string e) {

		this->minutes = NULL;
	}
	try {

		if (seconds < 0 || seconds > 59) {

			throw ("Error: Invalid minutes.");
		}
		else {
			this->seconds = seconds;
		}
	}
	catch (string e) {

		this->seconds = NULL;
	}
}

Hour::Hour() {

	hour = 0;
	minutes = 0;
	seconds = 0;
}

void Hour::setHour(int hour) {

	try {

		if (hour < 0 || hour > 23) {

			throw ("Error: Invalid hour.");
		}
		else {
			this->hour = hour;
		}
	}
	catch (string e) {

		this->hour = NULL;
	}
}

void Hour::setMinutes(int minutes) {

	try {

		if (minutes < 0 || minutes > 59) {

			throw ("Error: Invalid minutes.");
		}
		else {
			this->minutes = minutes;
		}
	}
	catch (string e) {

		this->minutes = NULL;
	}
}

void Hour::setSeconds(int seconds) {

	try {

		if (seconds < 0 || seconds > 59) {

			throw ("Error: Invalid minutes.");
		}
		else {
			this->seconds = seconds;
		}
	}
	catch (string e) {

		this->seconds = NULL;
	}
}

int Hour::getHour() {

	return hour;
}

int Hour::getMinutes() {

	return minutes;
}

int Hour::getSeconds() {

	return seconds;
}

string Hour::getTime() {

	string time = "";
	//converts the hours, minutes and seconds saved into a string format
	time = time + (char)((hour - hour % 10) / 10 + 48) + (char)((hour % 10) + 48) + ':' + (char)((minutes - minutes % 10) / 10 + 48) + (char)((minutes % 10) / 10 + 48) + ':' + (char)((seconds - seconds % 10) / 10 + 48) + (char)((seconds % 10) / 10 + 48);
	
	return time;
}