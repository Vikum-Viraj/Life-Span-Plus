#pragma once
#include <iostream>
#include "Membership_Plan.h"
#include "Member.h"

using namespace std;

class Membership_Plan
{
private:
	int membershipID;
	string membershipType;
	string membershipName;
	double PlanPrice;
	Member* memplan;

public:
	Membership_Plan();
	Membership_Plan(int ID, string Type, string Name, double Price,Member* pMemplan);
	void addMembership_Plan(Member* pmemplan);
	void getMembershipPlan();
	void updateMembershipPlan();
	void displayMembershipPlan();
	~Membership_Plan();
};

