#pragma once
#include <iostream>

using namespace std;

class Medical_Report
{
private:
	int reportId;
	string reportName;
	string IssuedDate;
	string Description;
	string Drugs;

public:
	Medical_Report();
	Medical_Report(int id, string name, string date, string details, string medicine);
	~Medical_Report();
};

