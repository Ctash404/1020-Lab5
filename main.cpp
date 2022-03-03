#include <iostream>
//#include "Employee.h"
//#include "ExtraLarge.cpp"
#include "Lab5.h"
#include "Invoice.h"

using namespace std;

int main()
{
    int customerType;
    const double annualPermit {200.0}, semesterPermit {100.0}, dayPermit {10.0};
    const double emplyeeDiscount {0.1};
    const double service {10.0};

    cout << "\t1 - Employee" << endl;
    cout << "\t2 - Student" << endl;
    cout << "\t3 - Guest" << endl;
    cout << "Please select a customer type: ";
    cin >> customerType;

    if (customerType == 2)
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
        cout << stud.getName() << endl;
        cout << stud.getEmail() << endl;
        cout << stud.getAddress() << endl;
        cout << stud.getYear() << endl;
        cout << stud.getGpa() << endl;





        // Car class
        string make, model, carYear, 
        lowEmission, tint;
        
        
        cin.ignore();   // Used to ignore the new line in the getline function
        // get the whole line includeing white spaces
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
        Car vechile(make, model, carYear, lowEmission, tint);
        
        // Prints the students information
        cout << "Make: " << vechile.getMake() << endl;
        cout << "Model: " <<vechile.getModel() << endl;
        cout << "Year: " << vechile.getYear() << endl;
        cout << "Low emission: " << vechile.getLowEmission() << endl;
        cout << "Tinted: " << vechile.getTinted() << endl;
    }
    return 0;
}