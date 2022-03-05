#include <iostream>
//#include "Employee.h"
//#include "ExtraLarge.cpp"
#include "Student.h"
#include "Car.h"
#include "Invoice.h"
#include "Guest.h"
#include "Motorcycle.h"
#include "Large.h"
#include "Employee.h"

using namespace std;

void printVechile();
void printPermit();

// Functions to get the vehicle info
Car mainCarProgram(string make, string model, string carYear, string lowEmission, string tint);
Motorcycle mainMotorcycleProgram(string make, string model, int year, int cc, string color);
ExtraLarge mainLargeProgram(string make, string model, int year, string specificType, string purpose);

// Function to get the permit info
double mainPermitType(int permitType, double annualPermit, 
    double semesterPermit, double dayPermit, double discount, double service);


int main()
{
    // Selction variables
    int customerType;
    int vehcileType;
    int permitType;

    // Variable amounts for prices
    const double annualPermit {200.0}, semesterPermit {100.0}, dayPermit {10.0};
    const double discount {0.1};
    const double service {10.0};
    double total;

    // Menu for the customer type and get the user's input
    cout << "\t1 - Employee" << endl;
    cout << "\t2 - Student" << endl;
    cout << "\t3 - Guest" << endl;
    cout << "Please select a customer type: ";
    cin >> customerType;

    // Validation for the user's choice and finds the correct type
    //Employee type
    if (customerType == 1)
    {
        string tempName, 
            tempEmail, 
            tempAddress, 
            tempDepartment;
        int tempYears;

        cin.ignore();
        cout << "Please enter your full name: ";
        getline(cin, tempName);

        cout << "Please enter your email: ";
        getline(cin, tempEmail);

        cout << "Please enter your address: ";
        getline(cin, tempAddress);

        cout << "Please enter the number of years you have been employed by Clemson University: ";
        cin >> tempYears;

        cin.ignore();
        cout << "Please enter the department you are employed by: ";
        getline(cin, tempDepartment);

        Employee emp(string, string, string, int, string);

        if (vehcileType == 1)
        {
            string make, model, carYear, 
            lowEmission, tint; 
            Car vehcile;
            //Car vehcile(make, model, carYear, lowEmission, tint); 
            vehcile = mainCarProgram(make, model, carYear, lowEmission, tint);
            
            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else if (vehcileType == 2)
        {
            string make, model, color;
            int year, cc;
            Motorcycle vehicle;
            vehicle = mainMotorcycleProgram(make, model, year, cc, color);

            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else if (vehcileType == 3)
        {
            string make, model, specificType, purpose;
            int year;
            mainLargeProgram(make, model, year, specificType, purpose);

            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else 
        {
            cout << "INVALID INPUT GOODBYE!" << endl;
        }
    }

    // Student type
    else if (customerType == 2)
    {
        string name, email, address, year;
        double gpa;
        
        cin.ignore();   // Used to ignore the new line in the getline function
        
        // get the whole line includeing white spaces
        cout << "Enter your name: ";
        getline (cin,name);    
        cout << "Enter your email: ";
        getline (cin,email);         
        cout << "Enter your address: ";
        getline (cin,address);
        cout << "Graduate or undergraduate student: ";
        getline (cin,year);
        cout << "Enter your gpa: ";
        cin >> gpa;

        // Creates the object for student
        Student stud(name, email, address, year, gpa);

        // Prints the vechile menu and then gets the user's input
        printVechile();
        cin >> vehcileType;

        // Validation for the user's input of the vechile type
        if (vehcileType == 1)
        {
            string make, model, carYear, 
            lowEmission, tint; 
            Car vehcile;
            //Car vehcile(make, model, carYear, lowEmission, tint); 
            vehcile = mainCarProgram(make, model, carYear, lowEmission, tint);
            
            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);

            //Prints the output
            Invoice out;
            out.printOutput(stud, vehcile, total);
        }
        else if (vehcileType == 2)
        {
            string make, model, color;
            int year, cc;
            Motorcycle vehicle;
            vehicle = mainMotorcycleProgram(make, model, year, cc, color);

            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);

            //Prints the output
            Invoice out;
        }
        else if (vehcileType == 3)
        {
            string make, model, specificType, purpose;
            int year;
            mainLargeProgram(make, model, year, specificType, purpose);

            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else 
        {
            cout << "INVALID INPUT GOODBYE!" << endl;
        }
    }

    // Visitor type
    else if (customerType == 3)
    {
        string name, email, address, location;
        int age;

        //gettting user input
        cout << "Enter age: ";
        cin >> age;

        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter email: ";
        getline(cin, email);

        cout << "Enter address: ";
        getline(cin, address);

        cout << "Enter location: ";
        getline(cin, location); 

        Guest guest(name, email, address, location, age);

        if (vehcileType == 1)
        {
            string make, model, carYear, 
            lowEmission, tint; 
            Car vehcile;
            //Car vehcile(make, model, carYear, lowEmission, tint); 
            vehcile = mainCarProgram(make, model, carYear, lowEmission, tint);
            
            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else if (vehcileType == 2)
        {
            string make, model, color;
            int year, cc;
            Motorcycle vehicle;
            vehicle = mainMotorcycleProgram(make, model, year, cc, color);

            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else if (vehcileType == 3)
        {
            string make, model, specificType, purpose;
            int year;
            mainLargeProgram(make, model, year, specificType, purpose);

            // Calculates the total price based on permit
            printPermit();
            cin >> permitType;
            total = mainPermitType(permitType, annualPermit, 
                 semesterPermit, dayPermit, discount, service);
        }
        else 
        {
            cout << "INVALID INPUT GOODBYE!" << endl;
        }
    }
    else 
    {
        cout << "INVALID INPUT GOODBYE!" << endl;
        
    }
    return 0;
}

// Prints the vechile menu
void printVechile()
{
    cout << "Vechile types" << endl;
    cout << "--------------------------" << endl;
    cout << "1 - Car" << endl;
    cout << "2 - Motorcycle" << endl;
    cout << "3 - Extra Large vechile" << endl;
    cout << "Enter the vechile type(1, 2, or 3): ";
}
// Prints the permit choices as a menu to the user
void printPermit()
{
    cout << "Permit types" << endl;
    cout << "--------------------------" << endl;
    cout << "1 - Annual" << endl;
    cout << "2 - Semester" << endl;
    cout << "3 - Day" << endl;
    cout << "Enter the permit type(1, 2, or 3): ";
}

// The main program for the car class
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
// Main program for motorcycle
Motorcycle mainMotorcycleProgram(string make, string model, int year, int cc, string color)
{
    
    cout << "Enter make: ";
    getline(cin, make);

    cout << "Enter model: ";
    getline(cin, model);

    cout << "Enter color: ";
    getline(cin, color);

    cout << "Enter Year: ";
    cin >> year;

    cout << "Enter CC: ";
    cin >> cc; 

    Motorcycle vehcile(make, model, year, cc, color);

    return vehcile;
}

// Function to get the large vehicle info
ExtraLarge mainLargeProgram(string make, string model, int year, string specificType, string purpose)
{
    cout << "Please enter your vehicle's make: ";
    cin >> make;
    cout << "Please enter your vehicle's model: ";
    cin >> model;
    cout << "Please enter your vehicle's year: ";
    cin >> year;
    cin.ignore();
    cout << "Please enter the specific type of vehicle: ";
    getline(cin, specificType);
    cout << "Please enter your vehicle's purpose ";
    getline(cin, purpose);
    
    ExtraLarge vehicle(make, model, year, specificType, purpose);

    return vehicle;
}
double mainPermitType(int permitType, double annualPermit, 
        double semesterPermit, double dayPermit, double discount, double service)
{
    double total;
    if (permitType == 1)
    {
        Invoice voice1(annualPermit, discount, service);
        total = voice1.calcTotal(annualPermit, service);
        cout << "Total: " << total << endl;
    }
    else if (permitType == 2)
    {
        Invoice voice2(semesterPermit, discount, service);
        total = voice2.calcTotal(semesterPermit, service);
        cout << "Total: " << total << endl;
    }
    else if (permitType == 2)
    {
        Invoice voice3(dayPermit, discount, service);
        total = voice3.calcTotal(dayPermit, service);
        cout << "Total: " << total << endl;
    }
    else 
    {
        cout << "INVALID INPUT GOODBYE!" << endl;
    }
    return total;
}