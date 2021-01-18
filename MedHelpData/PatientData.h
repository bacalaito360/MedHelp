#ifndef PATIENTDATA_H
#define PATIENTDATA_H

#include "Date.h"
#include <string>
using namespace std;

class PatientData {

	private:

		string patientName;
		string patientDoctor;
		Date patientDate;

	public:

		PatientData(string, string, Date);
		PatientData();
		void setPatientName(string);
		void setPatientDoctor(string);
		void setPatientDate(Date);
		string getPatientName();
		string getPatientDoctor();
		Date getPatientDate();


};

#endif
