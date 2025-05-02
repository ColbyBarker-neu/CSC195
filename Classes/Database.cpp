#include "Database.h"

Database::~Database()
{
	for (Vehicle* vhc : vehicles) {
		delete vhc;
	}
}

void Database::Create(Vehicle::eVehicle vehicleType)
{
	Vehicle* vhc = nullptr;
	switch (vehicleType) {
	case Vehicle::eVehicle::KART:
		vhc = new Kart;
		break;
	case Vehicle::eVehicle::BIKE:
		vhc = new Bike;
		break;
	}
	std::cin >> *vhc;
}

void Database::DisplayAll()
{
	for (Vehicle* vhc : vehicles) {
		std::cout << *vhc << std::endl;
	}
}

void Database::DisplayByName(const std::string& name)
{
	for (Vehicle* vhc : vehicles) {
		if (vhc->GetName() == name) {
			vhc->Write(std::cout);
		}
	}
}

void Database::DisplayByType(Vehicle::eVehicle vehicleType)
{
	for (Vehicle* vhc : vehicles) {
		if (vhc->GetType() == vehicleType) {
			vhc->Write(std::cout);
		}
	}
}
