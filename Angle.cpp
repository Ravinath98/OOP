#include "Angle.h"
#include <iostream>
using namespace std;


Angle::Angle()//default constructor definition
{
}

Angle::Angle(int d, float m, char i) :degrees(d), minutes(m), direction(i) //parameterized constructor definition
{
}

void Angle::getAngleValue() { //get values
	cout << "Enter Degrees   : ";
	cin >> degrees;
	cout << "Enter Minutes   : ";
	cin >> minutes;
	cout << "Enter Direction : ";
	cin >> direction;
}

void Angle::showAngleValue()const{ //show values

	cout << degrees << "\xF8" << minutes << "'" << direction ;

}