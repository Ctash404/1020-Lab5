#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name {"\0"};
        string email {"\0"};
        string address {"\0"};
        int yearsEmployed {0};
        string department {"\0"};
    public:
        Employee(string n, string e, string a, int y, string d) : name{n}, email{e}, address{a}, yearsEmployed{y}, department{d} {};
        
        bool setName(string n);
        bool setEmail(string e);
        bool setAddress(string a);
        bool setYearsEmployed(int y);
        bool setDepartment(string d);

        string const getName();
        string const getEmail();
        string const getAddress();
        int const getYearsEmployed();
        string const getDepartment();
};

#endif