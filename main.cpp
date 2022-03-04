#include <iostream>
//#include "Employee.h"
//#include "ExtraLarge.cpp"
#include "Lab5.h"
#include "Invoice.h"

using namespace std;
void printVechile();
void printPermit();
Car mainCarProgram(string make, string model, string carYear, string lowEmission, string tint);
double mainPermitType(int permitType);


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
    double total {0.0};

    // Menu for the customer type and get the user's input
    cout << "\t1 - Employee" << endl;
    cout << "\t2 - Student" << endl;
    cout << "\t3 - Guest" << endl;
    cout << "Please select a customer type: ";
    cin >> customerType;

    // Validation for the user's choice and finds the correct type
    if (customerType == 1)
    {

        cout << "Shain\n";
        // Calculates the total price based on permit
        void printPermit()
        cin >> permitType;
        if (permitType == 1)
        {
            Invoice voice1(annualPermit, discount, service);
            total = voice.calcDisTotal(permit, discount, ervice);
            cout << "Total: " << total << endl;
        }
        else if (permitType == 2)
        {
            Invoice voice2(semesterPermit, discount, service);
            total = voice.calcDisTotal(permit, discount, ervice);
            cout << "Total: " << total << endl;
        }
        else if (permitType == 2)
        {
            Invoice voice3(dayPermit, discount, service);
            total = voice.calcDisTotal(permit, discount, ervice);
            cout << "Total: " << total << endl;
        }
        else 
        {
            cout << "INVALID INPUT GOODBYE!" << endl;
        }
    }
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
        
        // Prints the students information
        cout << "Name: " << stud.getName() << endl;
        cout << "Email: " << stud.getEmail() << endl;
        cout << "Address: " << stud.getAddress() << endl;
        cout << "Year: " << stud.getYear() << endl;
        cout << "Gpa: " << stud.getGpa() << endl;

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
            void printPermit()
            cin >> permitType;
            total = mainPermitType(int permitType);
        }
        else if (vehcileType == 2)
        {
            cout << "Jacob\n";

            // Calculates the total price based on permit
            void printPermit()
            cin >> permitType;
            total = mainPermitType(int permitType);
        }
        else if (vehcileType == 3)
        {
            cout << "Shain\n";

            // Calculates the total price based on permit
            void printPermit()
            cin >> permitType;
            total = mainPermitType(int permitType);
        }
        else 
        {
            cout << "INVALID INPUT GOODBYE!" << endl;
        }
    }
    else if (customerType == 3)
    {
        cout << "Jacob\n";

        if (vehcileType == 1)
        {
            string make, model, carYear, 
            lowEmission, tint; 
            Car vehcile;
            //Car vehcile(make, model, carYear, lowEmission, tint); 
            vehcile = mainCarProgram(make, model, carYear, lowEmission, tint);
            
            // Calculates the total price based on permit
            void printPermit()
            cin >> permitType;
            total = mainPermitType(int permitType);
        }
        else if (vehcileType == 2)
        {
            cout << "Jacob\n";

            // Calculates the total price based on permit
            void printPermit()
            cin >> permitType;
            total = mainPermitType(int permitType);
        }
        else if (vehcileType == 3)
        {
            cout << "Shain\n";

            // Calculates the total price based on permit
            void printPermit()
            cin >> permitType;
            total = mainPermitType(int permitType);
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

double mainPermitType(int permitType)
{
    double total;
    if (permitType == 1)
    {
        Invoice voice1(annualPermit, discount, service);
        total = voice.calcTotal(annualPermit, service);
        cout << "Total: " << total << endl;
    }
    else if (permitType == 2)
    {
        Invoice voice2(semesterPermit, discount, service);
        total = voice.calcTotal(semesterPermit, service);
        cout << "Total: " << total << endl;
    }
    else if (permitType == 2)
    {
        Invoice voice3(dayPermit, discount, service);
        total = voice.calcTotal(dayPermit, service);
        cout << "Total: " << total << endl;
    }
    else 
    {
        cout << "INVALID INPUT GOODBYE!" << endl;
    }
    return total
}