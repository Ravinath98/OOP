#include <iostream>
#include "Ship.h"
#include "Angle.h"
using namespace std;

int main() {

	Ship Ship1, Ship2, Ship3;  //3 objects of class Ship...


	cout << "---------Enter Ship 1 Position---------" << endl << endl;

	Ship1.getPosition();

	cout << endl << "---------Enter Ship 2 Position---------" << endl << endl;

	Ship2.getPosition();

	cout << endl << "---------Enter Ship 3 Position---------" << endl << endl;

	Ship3.getPosition();

	cout << endl << endl;





	Ship1.showPositionSerialNo();  //call to show serial no and position..


	Ship2.showPositionSerialNo();    //call to show serial no and position..


	Ship3.showPositionSerialNo();    //call to show serial no and position..ss




}
