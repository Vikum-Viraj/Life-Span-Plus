#include "Medical_Report.h"
#include <iostream>

using namespace std;

Medical_Report::Medical_Report() {
	reportId = 0;
	reportName = " ";
	IssuedDate = " ";
	Description = " ";
	Drugs = " ";
}

Medical_Report::Medical_Report(int id, string name, string date, string details, string medicine) {
	reportId = id;
	reportName = name;
	IssuedDate = date;
	Description = details;
	Drugs = medicine;

}

Medical_Report::~Medical_Report() {
	cout << "Medical Report Object Deleted..." << endl;
}
