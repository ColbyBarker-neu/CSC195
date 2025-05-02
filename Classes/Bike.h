#pragma once
#include "Vehicle.h"
class Bike:public Vehicle {
public:
	bool hasInsideDrift;
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;
	eVehicle GetType() override { return eVehicle::BIKE; }
};
