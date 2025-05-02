#pragma once
#include "Vehicle.h"
#include "Kart.h"
#include "Bike.h"
#include <vector>
class Database {
public:
	std::vector<std::unique_ptr<Vehicle>> vehicles;
	~Database();
	void Create(Vehicle::eVehicle vehicleType);
	void Create(int);
	void DisplayAll();
	void DisplayByName(const std::string& name);
	void DisplayByType(Vehicle::eVehicle vehicleType);
};
