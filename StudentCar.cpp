#include "StudentCar.h"

// Functions for student class
bool Student::setName(string n)
{
    bool validate {false};

    if (!n.empty())
    {
        validate = true;
    }
    return validate;

}
bool Student::setEmail(string e)
{
    bool validate {false};

    if (!e.empty())
    {
        validate = true;
    }
    return validate;

}
bool Student::setAddress(string a)
{
    bool validate {false};

    if (!a.empty())
    {
        validate = true;
    }
    return validate;

}
bool Student::setYear(string y)
{
    bool validate {false};

    if (!y.empty())
    {
        validate = true;
    }
    return validate;
}
bool Student::setGpa(double g)
{
    bool validate {false};

    if (g > 4.0 || g < 0.0)
    {
        validate = true;
    }
    return validate;
}
string Student::getName()
{
    return name;
}
string Student::getEmail()
{
    return email;
}
string Student::getAddress()
{
    return address;
}
string Student::getYear()
{
    return year;
}
double Student::getGpa()
{
    return gpa;
}


// Functions for the car class
bool Car::setMake(string ma)
{
    bool validate {false};

    if (!ma.empty())
    {
        validate = true;
    }
    return validate;
}
bool Car::setModel(string mo)
{
    bool validate {false};

    if (!mo.empty())
    {
        validate = true;
    }
    return validate;
}
bool Car::setYear(string l)
{
    bool validate {false};

    if (!l.empty())
    {
        validate = true;
    }
    return validate;
}
bool Car::setLowEmission(string a)
{
    bool validate {false};

    if (!a.empty())
    {
        validate = true;
    }
    return validate;
}
bool Car::setTinted(string t)
{
    bool validate {false};

    if (!t.empty())
    {
        validate = true;
    }
    return validate;
}
string Car::getModel()
{
    return model;
}
string Car::getMake()
{
    return make;
}
string Car::getYear()
{
    return year;
}
string Car::getLowEmission()
{
    return lowEmission;
}
string Car::getTinted()
{
    return tinted;
}