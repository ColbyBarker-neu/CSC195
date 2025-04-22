#include "Vehicle.h"

void Vehicle::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter vehicle name: ";
	std::getline(istream >> std::ws, name);
	ostream << "Enter vehicle's top speed (in km/h): ";
	istream >> speed;
}

void Vehicle::Write(std::ostream& ostream)
{
	ostream << "Name: " << name << std::endl;
	ostream << "Speed: " << speed << std::endl;
}

std::string Vehicle::GetName()
{
	return std::string();
}
