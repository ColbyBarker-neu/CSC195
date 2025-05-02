#include "Kart.h"

void Kart::Read(std::ostream& ostream, std::istream& istream)
{
	Vehicle::Read(ostream, istream);
	std::string input;
	ostream << "Does this kart have 4 wheels? (yes/no or true/false): ";
	std::getline(istream >> std::ws, input);
	if (input == "yes" || input == "y" || input == "true" || input == "1") {
		has4Wheels = true;
	}
	else if (input == "no" || input == "n" || input == "false" || input == "0") {
		has4Wheels = false;
	}
}

void Kart::Write(std::ostream& ostream)
{
	Vehicle::Write(ostream);
	ostream << "4-Wheeled Kart: " << has4Wheels << std::endl;

}

void Kart::Read(std::ifstream& istream)
{
	istream >> has4Wheels;
}

void Kart::Write(std::ofstream& ostream) {
	ostream << has4Wheels << std::endl;
}
