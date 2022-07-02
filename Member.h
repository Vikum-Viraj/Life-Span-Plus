#pragma once
#include <iostream>
#include "BMI_Calculator.h"
#include "Diet_Plan.h"
#include "Membership_Plan.h"
#include "Appointment.h"
#include "Diet_Plan.h"
#include "BMI_Calculator.h"

using namespace std;

class Member
{
private:
	int MemID;
	string MemName;
	string MemAddress;
	string MemPassword;
	Membership_Plan* Mem[1];
	Appointment* apt;
	Diet_Plan* dpaln;
	BMI_Calculator* calbmi;


public:
	Member();//default constructor
	Member(int ID, string Name, string Address, string Password, Membership_Plan* Mplan, 
	Appointment* memapt,Diet_Plan* Mdplan ,BMI_Calculator* calmembmi);// pointers
	void getMemberDetails();
	void displayMemberDitails();
	void updateMemberDetailsUpdate();
	~Member();
};

