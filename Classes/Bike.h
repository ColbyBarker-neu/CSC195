#pragma once
#include "Vehicle.h"
class Bike:public Vehicle {
public:
	bool hasInsideDrift;
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eVehicle GetType() override { return eVehicle::BIKE; }
};
