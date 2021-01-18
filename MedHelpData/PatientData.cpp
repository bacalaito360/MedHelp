#include "PatientData.h"

PatientData::PatientData(string patientName, string patientDoctor, Date patientDate) {

	this->patientName = patientName;
	this->patientDoctor = patientDoctor;
	this->patientDate = patientDate;
}

void PatientData::setPatientName(string patientName) {

	this->patientName = patientName;
}

void PatientData::setPatientDoctor(string patientDoctor) {

	this->patientDoctor = patientDoctor;
}
void PatientData::setPatientDate(Date patientDate) {

	this->patientDate = patientDate;
}

string PatientData::getPatientName() {

	return patientName;
}

string PatientData::getPatientDoctor() {

	return patientDoctor;
}

Date PatientData::getPatientDate() {

	return patientDate;
}