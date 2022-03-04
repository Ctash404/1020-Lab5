#include <iostream>
//#include "Employee.h"
//#include "ExtraLarge.cpp"
#include "StudentCar.h"


using namespace std;

void printOutput(Student &stud)
{
    cout << "Name: " << stud.getName() << endl;
    cout << "Email: " << stud.getEmail() << endl;
    cout << "Address: " << stud.getAddress() << endl;
    cout << "Year: " << stud.getYear() << endl;
    cout << "Gpa: " << stud.getGpa() << endl;
}
int main()
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

        printOutput(stud);
    return 0;
}