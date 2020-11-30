#pragma once
#include "Angle.h"
class Ship
{private:
	Angle latitude;  //object of Angle class
	Angle longitude; //object of Angle class
	static int shipSerialNo;  //static variable
public:
	Ship();
	void getPosition();
	void showPositionSerialNo()const;

};

