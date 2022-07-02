#include "Diet_Plan.h"
#include <iostream>

using namespace std;

#include "Diet_Plan.h"
#include <iostream>

using namespace std;

Diet_Plan::Diet_Plan() {
	dietID = 0;
	dietPlanDuration = '0';
	dietPlanName = " ";
	dietPlanType = " ";

}

Diet_Plan::Diet_Plan(int PlanID, string PlanType, string PlanName, string PlanDuration) {
	dietID = PlanID;
	dietPlanDuration = PlanDuration;
	dietPlanName = PlanName;
	dietPlanType = PlanType;
}

void Diet_Plan::DisplayDietPlan() {
	cout << "Diet Plan ID: " << dietID << endl;
	cout << "Diet Plan Name: " << dietPlanName << endl;
	cout << "Diet Plan Duration: " << dietPlanDuration << endl;
	cout << "Diet Plan Type: " << dietPlanDuration << endl;
}

Diet_Plan::~Diet_Plan() {
	cout << "Diet Plan Deleted..." << endl;
}
