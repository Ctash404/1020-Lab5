#include <iostream>
#include <string>
#include "StudentCar.h"

using namespace std;
Car mainCarProgram(string make, string model, string carYear, string lowEmission, string tint)
{
    // Car class

    cout << "Enter the make of the car: ";
    cin >> make;

    cout << "Enter the model of the car: ";
    cin >> model;
    
    cout << "Enter the year of the car: ";
    cin >> carYear;
    
    cout << "Enter yes if the car is low emission or no if it is not:: ";
    cin >> lowEmission;

    cout << "Enter yes if the car is tinted or no if it is not: ";
    cin >> tint;
    // Creates the object for student
    Car vehcile(make, model, carYear, lowEmission, tint);

    return vehcile;
}
int main()
{
    string make, model, carYear, 
    lowEmission, tint; 
    Car vehcile;
    //Car vehcile(make, model, carYear, lowEmission, tint); 
    vehcile = mainCarProgram(make, model, carYear, lowEmission, tint);

    cout << vehcile.getModel();
    return 0;
}