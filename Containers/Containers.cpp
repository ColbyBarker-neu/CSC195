// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <map>
int main()
{//ARRAY
    string week[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int index = 0;
	for (int i = 0; i < 7; i++)
	{
		cout << week[index] << endl;
		index += 1;
	}
    cout << "\n";
    // --- VECTOR<int> ---
    vector<int> numbers = { 1, 2, 3, 4, 5 };

    numbers.push_back(6);
    numbers.push_back(7);

    numbers.pop_back();  // removes 7

    for (int num : numbers) {
        cout << num << endl;
    }
    cout << "\n";

    // --- LIST<string> ---
    list<string> fruits = { "apple", "banana", "cherry" };

    fruits.push_front("kiwi");
    fruits.push_back("mango");

    fruits.remove("banana");  // remove specific element

    
    for (string fruit : fruits) {
        cout << fruit << endl;
    }
    cout << "\n";

    // --- MAP<string, int> ---
    map<string, int> stock;
    stock["apples"] = 10;
    stock["bananas"] = 5;
    stock["oranges"] = 8;

    // Update value for one key
    stock["bananas"] = 7;

    
    for (const auto& pair : stock) {
        cout << pair.first << ": " << pair.second << "\n";
    }
    
}

