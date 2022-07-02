#include "BMI_Calculator.h"
#include <iostream>

using namespace std;

BMI_Calculator::BMI_Calculator() { //default constutor
	height = 0;
	weight = 0;
	age = 0;
	gender = 'M';
}

BMI_Calculator::BMI_Calculator(double M_height, double M_weight, int M_age, char M_gender) {
	height = M_height;
	weight = M_weight;
	age = M_age;
	gender = M_gender;
}


double BMI_Calculator::Calc_BMI(double M_height, double M_weight) {

	double BMI_Value;

	//BMI Value Calculate
	BMI_Value = M_weight / M_height * M_height;
	cout << "BMI Value: " << BMI_Value << endl;

	//Find BMI Status 
	if (BMI_Value >= 25.0) {
		cout << "You are overweight..." << endl;
	}
	else if (BMI_Value >= 18.5) {
		cout << "You are in healthy range..." << endl;
	}
	else {
		cout << "You are low weight..." << endl;
	}

	return 0;
}

BMI_Calculator::~BMI_Calculator() {
	cout << "BMI Calc Deleted..." << endl;
}
