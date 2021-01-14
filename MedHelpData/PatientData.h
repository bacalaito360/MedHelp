#ifndef PATIENTDATA_H
#define PATIENTDATA_H

using namespace std;

class PatientData {

	private:

		string patientName;
		string patientDate;


	public:

		void setPatientName(string patientName);
		void setPatientDate(string patientName);
		string getPatientName();
		string getPatientDate();


};

#endif
