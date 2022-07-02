#include "Doctor.h"
#include <iostream>
#include <cstring>
using namespace std;

Doctor::Doctor() {
	docterID = 0;
	strcpy_s(docterName, " ");
	strcpy_s(docterSpeciality, " ");
	docterExperience = 0;
}

Doctor::Doctor(int docID, char docName[], char docSp[], int docExp) {
	docterID = docID;
	strcpy_s(docterName, docName);
	strcpy_s(docterSpeciality, docSp);
	docterExperience = docExp;
}

void Doctor::getDocterDetails() {
	cout << "Doctor ID : " << docterID << endl;
	cout << "Docter Name : " << docterName << endl;
	cout << "Doctor Speciality : " << docterSpeciality << endl;
	cout << "Doctor Experience : " << docterExperience << endl;
}

Doctor::~Doctor() {
	cout << "Destructer runs for Docter with Docter Id : " << docterID << endl;
}