#pragma once
#include "Member.h"

class Appointment {
protected:
	int appointmentId;
	char appointmentName[50];
	double appointmentPrice;
	Member* memappoint;

public:
	Appointment();
	Appointment(int apID, char apName[], double apPrice,Member* mapt);
	void displayAppointment();
	~Appointment();
};

