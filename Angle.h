#pragma once


class Angle
{ private:
	int degrees;
	float minutes;
	char direction;

public:
	Angle();    //default constructor of class Angle
	Angle(int d, float m, char i); //parameterized constructor of class Angle
	void getAngleValue();  //Getting the Angle values(latitude/longitude)
	void showAngleValue()const;  //show Angle value (latitude/longitude)

};

