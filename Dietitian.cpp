#include "Dietitian.h"
#include <iostream>

using namespace std;

Dietitian::Dietitian() {
	dietitianID = 0;
	dietitianName = " ";
}

Dietitian::Dietitian(int ID, string Name) {
	dietitianID = ID;
	dietitianName=Name;
}

Dietitian::~Dietitian() {
	cout << "Dietitian Object Deleted..." << endl;
}