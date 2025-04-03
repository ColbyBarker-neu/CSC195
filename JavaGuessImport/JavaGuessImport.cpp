

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int randNum;
    int upper;
    int lower;
    int response;
    bool exitCheck = false;
    cout << "Enter upper bound: ";
    cin >> upper;
    cout << "Enter lower bound: ";
    cin >> lower;
    if (lower >= upper) {
        cout << "Bounds invalid. Try again. Closing...";
        return 0;
    }
    else {
        srand(time(0)); // Seed random number generator
        int randNum = rand() % upper + lower; // Random number from lower bound to upper bound
        while (exitCheck == false) {
            cout << "Guess a number: ";
            cin >> response;
            if (response > randNum) {
                cout << "Wrong! The number was lower than that!\n";
            }
            else if (response < randNum) {
                cout << "Wrong! The number was higher than that!\n";
            }
            else {
                cout << "You got it right!";
                exitCheck = true;
            }
        }
        
        return 0;
    }
}

