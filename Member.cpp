#include "Member.h"
#include <iostream>
#include "Diet_Plan.h"
#include "Membership_Plan.h"
#include "Appointment.h"
#include "BMI_Calculator.h"

Member::Member() {
	MemID = 0;
	MemName = " ";
	MemAddress = " ";
	MemPassword = " ";
}

Member::Member(int ID, string Name, string Address, string Password) {
	MemID = ID;
	MemName = Name;
	MemAddress = Address;
	MemPassword = Password;
}

void addMembership_Plan(Member* pMemplan)
{


}

void Member::addMembership_Plan(Member* pMemplan)
{
}

void Member::getMemberDetails() {
	cout << "Member ID: ";
	cin >> MemID;

	cout << "Member Name: ";
	cin >> MemName;

	cout << "Member Address: ";
	cin >> MemAddress;

	cout << "Member Password: ";
	cin >> MemPassword;
}

void Member::displayMemberDitails() {
	cout << "ID: " << MemID << endl;
	cout << "Name: " << MemName << endl;
	cout << "Address: " << MemAddress << endl;
	cout << "Password: " << MemPassword << endl;
}

void Member::updateMemberDetailsUpdate() {
	cout << "Enter New Address: ";
	cin >> MemAddress;

	cout << "Enter New Password: ";
	cin >> MemPassword;
}

Member::~Member() {
	cout << "Member Object Deleted..." << endl;
}


