# OOP

Part I

In ocean navigation, locations are measured in degrees and minutes of latitude and
longitude. Thus if you’re lying off the mouth of Papeete Harbor in Tahiti, your location
is 149 degrees 34.8 minutes west longitude, and 17 degrees 31.5 minutes south
latitude. This is written as 149°34.8’ W, 17°31.5’ S. There are 60 minutes in a degree.
(An older system also divided a minute into 60 seconds, but the modern approach is
to use decimal minutes instead.) Longitude is measured from 0 to 180 degrees, east
or west from Greenwich, England, to the international dateline in the Pacific. Latitude
is measured from 0 to 90 degrees, north or south from the equator to the poles.
Create a class ​Angle ​that includes three member variables: an ​int ​for degrees, a
float ​for minutes, and a ​char​for the direction letter (N, S, E, or W). This class can
hold either a latitude variable or a longitude variable. Write one member function to
obtain an angle value (in degrees and minutes) and a direction from the user, and a
second to display the angle value in 179°59.9’ E format. Also, write a three-argument
constructor. You can use the hex character constant ‘\xF8’, which usually prints a
degree (°) symbol.

Part II
Create a class called ​Ship​​that incorporates a ship’s number and location. Use an
appropriate technique to number each ship object as it is created. Use two variables
of the ​Angle​​class to represent the ship’s latitude and longitude. A member function
of the ship class should get a position from the user and store it in the object;
another should report the serial number and position.
Write a ​main()​program that creates three ships, asks the user to input the position
of each, and then displays each ship’s number and position.
