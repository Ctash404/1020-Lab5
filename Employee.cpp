#include "Employee.h"
bool Employee::setName(string n)
{
    bool validity {false};

    if(!n.empty())
    {
        validity = true;
        name = n; 
    }

    return validity;
}

bool Employee::setEmail(string e)
{
    bool validity {false};

    if(!e.empty())
    {
        validity = true;
        email = e;
    }

    return validity;
}

bool Employee::setAddress(string a)
{
    bool validity {false};

    if(!a.empty())
    {
        validity = true;
        address = a;
    }

    return validity;
}

bool Employee::setYearsEmployed(int y)
{
    bool validity {false};

    if(y >= 0)
    {
        validity = true;
        yearsEmployed = y;
    }

    return validity;
}

bool Employee::setDepartment(string d)
{
    bool validity {false};

    if(!d.empty())
    {
        validity = true;
        department = d; 
    }

    return validity;
}


const string Employee::getName()
    { return name; }
const string Employee::getEmail()
    { return email; }
const string Employee::getAddress()
    { return address; }
const int Employee::getYearsEmployed()
    { return yearsEmployed; }
const string Employee::getDepartment()
    { return department; }