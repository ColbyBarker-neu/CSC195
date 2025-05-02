#include "Bike.h"

void Bike::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream);
	std::string input;
	ostream << "Does this bike have inside drift? (yes/no or true/false): ";
	std::getline(istream >> std::ws, input);
	if (input == "yes" || input == "y" || input == "true" || input == "1") {
		hasInsideDrift = true;
	}
	else if (input == "no" || input == "n" || input == "false" || input == "0") {
		hasInsideDrift = false;
	}
}

void Bike::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream);
	ostream << "Inside Drifting Bike: " << hasInsideDrift << std::endl;
}
void Bike::Read(std::ifstream& istream)
{
	istream >> hasInsideDrift;
}

void Bike::Write(std::ofstream& ostream) {
	ostream << hasInsideDrift << std::endl;
}
