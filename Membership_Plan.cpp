#include "Membership_Plan.h"
#include <iostream>

using namespace std;

Membership_Plan::Membership_Plan() {
	membershipID = 0;
	membershipType = " ";
	membershipName = " ";
	PlanPrice = 0;
}

Membership_Plan::Membership_Plan(int ID, string Type, string Name, double Price, Member* pMemplan)
{
}

Membership_Plan::Membership_Plan(int ID, string Type, string Name, double Price) {
	membershipID = ID;
	membershipType = Type;
	membershipName = Name;
	PlanPrice = Price;
}

void Membership_Plan::getMembershipPlan() {
	cout << "Membership Plan ID: ";
	cin >> membershipID;

	cout << "Membership Plan Type: ";
	cin >> membershipType;

	cout << "Membership Plan Name: ";
	cin >> membershipName;

	cout << "Enter Plan Price: ";
	cin >> PlanPrice;
}

void addMembership_Plan(Member* pMemplan)
{

}

void Membership_Plan::updateMembershipPlan() {
	cout << "Enter New Plan Name: ";
	cin >> membershipName;

	cout << "Enter New Price: ";
	cin >> PlanPrice;
}

void Membership_Plan::displayMembershipPlan() {
	cout << "Plan ID: " << membershipID << endl;
	cout << "Plan Name: " << membershipName << endl;
	cout << "Type: " << membershipType << endl;
	cout << "Price: " << PlanPrice << endl;
}

Membership_Plan::~Membership_Plan() {
	cout << "Delete Object Membership Plan..." << endl;
}