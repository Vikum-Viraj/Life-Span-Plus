#pragma once
class Doctor {
protected:
	int docterID;
	char docterName[50];
	char docterSpeciality[50];
	int docterExperience;
public:
	Doctor();
	Doctor(int docID, char docName[], char docSp[], int docExp);
	void getDocterDetails();
	~Doctor();
};
