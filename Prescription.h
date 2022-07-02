#pragma once
#include <iostream>

using namespace std;

class Prescription
{
private:
	int PrescriptionID;
	char PatientName;
	char IssueDate;
	char Drugs;

public:
	Prescription();
	Prescription(int pID, char pName, char pissueDate, char pdrugs);
	void DisplayPrescription();
	~Prescription();
};

