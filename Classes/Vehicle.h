#pragma once
#include <string>
#include <iostream>
class Vehicle {
public:
	enum class eVehicle {
		KART,
		BIKE,
		ATV
	};
	std::string name;
	int speed;
	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	std::string GetName();
	virtual eVehicle GetType() = 0;
	
};