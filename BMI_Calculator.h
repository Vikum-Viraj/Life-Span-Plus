#pragma once
#include <iostream>
#include "Member.h"

using namespace std;


class BMI_Calculator
{
private:
	double height;
	double weight;
	int age;
	char gender;



public:
	BMI_Calculator();
	BMI_Calculator(double M_height, double M_weight, int M_age, char M_gender);
	double Calc_BMI(double M_height, double M_weight);
	~BMI_Calculator();
};

