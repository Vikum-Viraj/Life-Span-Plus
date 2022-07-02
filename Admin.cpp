#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin() { //default constutor
	AdminId = 0;
	AdminName = 'Y';
	Admintask = 'U';

}

Admin::Admin(int Adid, char AdName, char Adtask) {

	AdminId = Adid;
	AdminName = AdName;
	Admintask = Adtask;
}

Admin::~Admin() {
	cout << "Destructor Runs..." << endl;
}

