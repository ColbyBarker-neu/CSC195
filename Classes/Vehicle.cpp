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
void Vehicle::Read(std::ifstream& istream) {
	istream >> name;
	istream >> speed;
}
void Vehicle::Write(std::ofstream& ostream) {
	ostream << name << std::endl;
	ostream << speed << std::endl;
}
std::string Vehicle::GetName()
{
	return std::string();
}

std::istream& operator>>(std::istream& istream, Vehicle& animal)
{
	animal.Read(std::cout, istream);
	return istream;
}

std::ostream& operator<<(std::ostream& ostream, Vehicle& vehicle)
{
	vehicle.Write(ostream);
	return ostream;
}

std::ifstream& operator>>(std::ifstream& istream, Vehicle& vehicle)
{
	vehicle.Read(istream);
	return istream;
}

std::ofstream& operator<<(std::ofstream& ostream, Vehicle& vehicle)
{
	vehicle.Write(ostream);
	return ostream;
}
