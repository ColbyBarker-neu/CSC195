// Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "Vehicle.h"
#include "Database.h"
int main()
{
    Database database;
    bool quit = false;
    int t;
    std::string name;
    while (!quit) {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice) {
        case 1:
            std::cout << "Enter type (0 for KART, 1 for BIKE): ";
            std::cin >> t;
            database.Create(static_cast<Vehicle::eVehicle>(t));
            break;
        case 2:
            database.DisplayAll();
            break;
        case 3:
            std::cout << "Name? ";
            std::cin >> name;
            database.DisplayByName(name);
            break;
        case 4:
            std::cout << "Enter type (0 for KART, 1 for BIKE): ";
            int t;
            std::cin >> t;
            database.DisplayByType(static_cast<Vehicle::eVehicle>(t));
            break;
        case 5:
            quit = true;
            break;
        }
    }
}


