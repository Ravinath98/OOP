#include "Ship.h"
#include "Angle.h"
#include <iostream>
using namespace std;


Ship::Ship() //Default constructor...
{

}


void Ship::getPosition() { // get latitude and longitude with the help of latitude and longitude objects of Angle class...
	cout << "Enter Longitude        :" << endl;
	longitude.getAngleValue();
	cout << endl;
	cout << "Enter Latitude         : " << endl;
	latitude.getAngleValue();

}

int Ship::shipSerialNo = 0;  //static variable initializing...

void Ship::showPositionSerialNo()const{  //show position with the help of Angle objects and access angle class functions and the Serial no
	

	cout << endl<<endl << "Ship Serial No : "<<++shipSerialNo<<"     "<<"Postion : ";
	
	longitude.showAngleValue();  //show longitude
	cout << ",";
	latitude.showAngleValue();  //show latitude
}

