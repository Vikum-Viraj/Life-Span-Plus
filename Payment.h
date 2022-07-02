#pragma once
#include <iostream>

using namespace std;

class Payment
{
protected:
	double Amount;
	int PayID;
	char PayType;
	int PayDate;

public:
	Payment();
	Payment(double PAmount, int PPayID, char PPayType, int PPayDate);
	void DisplayPaymentDetails();
	~Payment();
};

