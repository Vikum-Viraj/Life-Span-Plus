#pragma once
#include <iostream>
#include "Member.h"
#include "Dietitian.h"

using namespace std;


class Diet_Plan
{
private:
	int dietID;
	string dietPlanType;
	string dietPlanName;
	string dietPlanDuration;


public:
	Diet_Plan();
	Diet_Plan(int PlanID, string PlanType, string PlanName, string PlanDuration);
	void DisplayDietPlan();
	~Diet_Plan();
};

