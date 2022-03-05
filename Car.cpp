#include "Car.h"
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