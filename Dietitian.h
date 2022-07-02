#pragma once
#include <iostream>

using namespace std;

class Dietitian
{
	private:
		int dietitianID;
		string dietitianName;
	public:
		Dietitian();
		Dietitian(int ID, string Name);
		~Dietitian();	
};

