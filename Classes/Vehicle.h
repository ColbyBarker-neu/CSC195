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
	virtual void Read(std::ifstream& istream);
	virtual void Write(std::ofstream& ostream);
	friend std::istream operator >> (std::istream& istream, Vehicle& vehicle);
	friend std::ostream operator << (std::ostream& ostream, Vehicle& vehicle);
	friend std::ifstream operator >> (std::ifstream& istream, Vehicle& vehicle);
	friend std::ofstream operator << (std::ofstream& ostream, Vehicle& vehicle);
	std::string GetName();
	virtual eVehicle GetType() = 0;
	
};