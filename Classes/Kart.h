#pragma once
#include "Vehicle.h"
class Kart:public Vehicle{
public:
	bool has4Wheels;
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	void Read(std::ifstream& istream) override;
	void Write(std::ofstream& ostream) override;
	eVehicle GetType() override { return eVehicle::KART; }
};
